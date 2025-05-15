//Sumar dos variables y usar otra para guardar el resultado

#include <stdio.h>

int main(){
    float num1, num2, resultado;
    
    printf("Ingrese 2 numeros para sumarlos\n");
    scanf("%f %f", &num1, &num2);
    
    resultado = num1 + num2;
    
    printf("Su suma es de %f", resultado);
}
