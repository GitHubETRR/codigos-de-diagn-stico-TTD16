//Usar una constante para el valor de PI

#include <stdio.h>
#define PI 3.14

int main(){
    float radio, area;
    printf("Ingrese el radio de su circulo\n");
    scanf("%f", &radio);
    
    area = PI*radio*radio;
    
    printf("El area de su circulo es de %f", area);
}
