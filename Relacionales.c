//Relacionales

#include <stdio.h>

int main(){
    int num1, num2;
    
    printf("Bienvenido, ingrese 2 numeros y vemos si son iguales o si uno es mayor que el otro\n");
    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);
    
    if(num1 == num2){
        printf("Numero 1 es igual que Numero 2");
    }else if(num1 <= num2){
        printf("Numero 1 es menor que el Numero 2");
    }else if(num1 >= num2){
        printf("Numero 1 es mayor que el Numero 2");
    }
}
