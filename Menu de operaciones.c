//Menu de operaciones
#include<stdio.h>

void bienvenida();
void proceso();

int main(){
        bienvenida();
        proceso();
}
void bienvenida(){
    printf("\n\t \033[31;1mMenu");
    printf("\n\t 1. Suma");
    printf("\n\t 2. Resta");
    printf("\n\t 3. Multiplicación");
    printf("\n\n\t Ingresa tu opcion: \033[0m");
}
void proceso(){
    int num1, num2, resultado, opcion;
     scanf("%d", &opcion); 
        if(opcion <= 3 && opcion > 0)
        {
                printf("\033[31;1mIngresa 2 numeros: \n\033[0m");
                scanf("%d %d", &num1, &num2);
        }
        switch(opcion)
        {
                case 1:
                resultado = num1 + num2;
                printf("\033[31;1mSuma:\033[0m %d", resultado);
                break;

                case 2:
                resultado = num1 - num2;
                printf("\033[31;1mResta:\033[0m %d", resultado);
                break;

                case 3:
                resultado = num1 * num2;
                printf("\033[31;1mMultiplicación:\033[0m %d", resultado);
                break;

                default:
                printf("\033[31;1mOpcion invalida\033[0m");
                break;
        }
}
