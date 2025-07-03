//Uniones
#include <stdio.h>

union Valor{
    int a;
    float b;
    char c[50];
};

int main(){
    union Valor dato;
    
    printf("Ingrese su edad: ");
    scanf("%d", &dato.a);
    printf("Tiene %d años\n", dato.a);
    
    printf("Ingrese su altura: ");
    scanf("%f", &dato.b);
    printf("Su altura es de %fm\n", dato.b);
    
    printf("Ingrese su nombre: ");
    scanf("%s", dato.c);
    printf("Su nombre es %s\n", dato.c);
    
    printf("Datos guardados, enviando información...");
    
    return 0;
}
