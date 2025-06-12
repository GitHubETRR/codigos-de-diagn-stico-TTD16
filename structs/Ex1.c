#include <stdio.h>
#include <string.h>
#define max 50

struct mascota{
    char nombre[max];
    int edad;
    float peso;
};

int main(){
    struct mascota m1;
    
    printf("Bienvenido, ingrese los datos de su mascota\n");
    printf("Nombre: ");
    scanf("%s", m1.nombre);
    printf("Edad: ");
    scanf("%d", &m1.edad);
    printf("Peso: ");
    scanf("%f", &m1.peso);
    
    printf("\nSu mascota se llama %s\n", m1.nombre);
    printf("Tiene %d años\n", m1.edad);
    printf("Pesa %fkg", m1.peso);
    
    return 0;
}
