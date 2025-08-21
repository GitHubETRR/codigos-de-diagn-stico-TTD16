//Operadores Black ops 6
#include <stdio.h>
#include <string.h>
#define MAX_CHAR 50
#define MAX_BIO 200

typedef struct {
    char nombre[MAX_CHAR];
    int edad;
    char biografia[MAX_BIO];
} Operador;

void mostrarOperador(Operador op) {
    printf("\n=== INFORMACIÓN DEL OPERADOR ===\n");
    printf("Nombre: %s\n", op.nombre);
    printf("Edad: %d\n", op.edad);
    printf("Biografía: %s\n", op.biografia);
}

int main() {
    // Lista de operadores
    Operador operadores[3] = {
        {"Ghost", 35, "Experto en infiltración y operaciones encubiertas. Siempre lleva una máscara de calavera."},
        {"Mara", 29, "Francotiradora de élite y experta en combate urbano. Ex miembro de fuerzas especiales."},
        {"Price", 45, "Veterano de guerra con décadas de experiencia en operaciones internacionales."}
    };

    int eleccion;
    char confirmar;

    while (1) { // bucle hasta que confirme
        printf("\n=== SELECCIONA TU OPERADOR DE COMBATE ===\n");
        for (int i = 0; i < 3; i++) {
            printf("%d. %s\n", i + 1, operadores[i].nombre);
        }
        printf("Elige un número: ");
        scanf("%d", &eleccion);

        if (eleccion >= 1 && eleccion <= 3) {
            mostrarOperador(operadores[eleccion - 1]);

            printf("\n¿Quieres confirmar este operador? (s/n): ");
            scanf(" %c", &confirmar); // espacio antes de %c evita errores con \n

            if (confirmar == 's' || confirmar == 'S') {
                printf("\n✅ Operador confirmado: %s\n", operadores[eleccion - 1].nombre);
                printf("🚀 Iniciando el juego...\n");
                break; // salir del bucle y terminar programa
            } else {
                printf("\nVolviendo a la selección de operadores...\n");
            }
        } else {
            printf("\n❌ Opción no válida.\n");
        }
    }

    return 0;
}
