#include <stdio.h>
#include <string.h>

// Definición de la estructura
typedef struct {
    char nombre[50];
    int edad;
    char biografia[200];
} Operador;

// Función para mostrar un operador
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

    printf("=== SELECCIONA TU OPERADOR DE COMBATE ===\n");
    printf("1. %s\n", operadores[0].nombre);
    printf("2. %s\n", operadores[1].nombre);
    printf("3. %s\n", operadores[2].nombre);
    printf("Elige un número: ");
    scanf("%d", &eleccion);

    if (eleccion >= 1 && eleccion <= 3) {
        mostrarOperador(operadores[eleccion - 1]);
    } else {
        printf("\nOpción no válida.\n");
    }

    return 0;
}
