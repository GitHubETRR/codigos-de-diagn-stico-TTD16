//Aritméticos

#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2, suma, resta, multiplicacion, division, modulo;
    
    printf("Ingrese 2 numeros\n");
    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);
    
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;
    modulo = num1 % num2;
    
    printf("Su suma: %d\nSu resta: %d\nSu multiplicacion: %d\nSu division: %d\nSu modulo: %d", suma, resta, multiplicacion, division, modulo);
}
