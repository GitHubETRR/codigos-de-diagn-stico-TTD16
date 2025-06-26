#include <stdio.h>

struct Persona{
    char nombre[50];
    int edad;
    float altura;
};
void cargarpersonas();
void mostrarpersonas();

int main(){
    int cantidad;
    printf("Bienvenido, ingrese cuantas personas quiere ingresar: ");
    scanf("%d", &cantidad);
    struct Persona personas[cantidad];    

    cargarpersonas(personas, cantidad);
    mostrarpersonas(personas, cantidad);
}
void cargarpersonas(struct Persona p[], int cantidad){
    for(int i=0; i<cantidad; i++){
        printf("\n--Persona %d---\n", i+1);
        printf("Nombre: ");
        scanf("%s", p[i].nombre);
        printf("Edad: ");
        scanf("%d", &p[i].edad);
        printf("Altura: ");
        scanf("%f", &p[i].altura);
    }
}
void mostrarpersonas(struct Persona p[], int cantidad){
    printf("\nINFORMACION DE PERSONAS...\n");
    for(int i=0;i<cantidad;i++){
        printf("\n--Persona %d--\n", i+1);
        printf("Nombre: %s\n", p[i].nombre);
        printf("Edad: %d\n", p[i].edad);
        printf("Altura: %f\n", p[i].altura);
    }
}
