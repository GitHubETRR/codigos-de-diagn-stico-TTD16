#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 20
#define MAX_LEN 50
#define FILENAME "armas.txt"

void trim_newline(char *str) {
    str[strcspn(str, "\r\n")] = 0;
}

int get_choice(int max) {
    int choice;
    char buffer[100];
    while (1) {
        printf("Elige un numero (1-%d): ", max);
        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%d", &choice) == 1 && choice >= 1 && choice <= max) {
            return choice;
        }
        printf("Opcion invalida.\n");
    }
}

void procesar_categoria(const char *category_name, char *eleccion_final) {
    char items[MAX_ITEMS][MAX_LEN];
    int item_count = 0;
    char line[100];
    char category_header[MAX_LEN];
    sprintf(category_header, "[%s]", category_name);

    FILE *file = fopen(FILENAME, "r");
    if (!file) {
        printf("Error: No se pudo abrir %s\n", FILENAME);
        exit(1);
    }
    
    int in_category = 0;
    while (fgets(line, sizeof(line), file)) {
        trim_newline(line);
        if (strcmp(line, category_header) == 0) {
            in_category = 1;
            continue;
        }
        if (in_category) {
            if (line[0] == '[' || item_count >= MAX_ITEMS) break;
            if (strlen(line) > 0) {
                strcpy(items[item_count++], line);
            }
        }
    }
    fclose(file);

    printf("\n--- Elige tu %s ---\n", category_name);
    for (int i = 0; i < item_count; i++) {
        printf("%d. %s\n", i + 1, items[i]);
    }

    int choice = get_choice(item_count);
    strcpy(eleccion_final, items[choice - 1]);
    
}

int main() {
    const char *categorias[] = {
        "ARMA PRINCIPAL", "ARMA SECUNDARIA", "ARMA CUERPO A CUERPO", 
        "HABILIDAD", "EQUIPAMIENTO TACTICO", "EQUIPAMIENTO LETAL"
    };
    char elecciones[6][MAX_LEN];

    for (int i = 0; i < 6; i++) {
        procesar_categoria(categorias[i], elecciones[i]);
    }
    
    printf("\n\n--- EQUIPAMIENTO FINAL SELECCIONADO ---\n");
    for (int i = 0; i < 6; i++) {
        printf("%-20s: %s\n", categorias[i], elecciones[i]);
    }
    return 0;
}
