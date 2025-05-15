//Conversión de temperatura

#include <stdio.h>

int main(){
    float celsius, fahrenheit;
    
    printf("Bienvenido al programa que convierte grados celsius a grados fahremheit\n");
    printf("Para comenzar ingrese los grados celsius:\n");
    scanf("%f", &celsius);
    
    fahrenheit = (1.8 * celsius) + 32;
    
    printf("Sus grados celsius en fahrenheit son %f", fahrenheit);
}
