//Datos de un estudiante

#include <stdio.h>

int main(){
    char nombre[50];
    int edad;
    float promedio;
    
    printf("Bienvenido, ingrese sus datos\n");
    printf("Nombre: ");
    scanf("%s", nombre);
    printf("Edad: ");
    scanf("%d", &edad);
    printf("Promedio: ");
    scanf("%f", &promedio);
    
    printf("Nombre: %s\nEdad: %d\nPromedio: %f", nombre, edad, promedio);
}
