//Suma, resta, division y multiplicacion
#include <stdio.h>

void Bienvenida();
int datos();
int Decision();
void proceso(float, float, int);

int main(){
    float num1, num2;
    int decision;
    Bienvenida();
    num1 = datos();
    num2 = datos();
    decision = Decision();
    proceso(num1, num2, decision);
}
void Bienvenida(){
    printf("\033[0;33m¡Bienvenido al programa de suma, resta, division y multiplicacion!\033[0m\n");
    printf("\033[0;33mPara comenzar, ingrese 2 valores cualesquiera: \033[0m\n");
}
int datos(){
    int a;
    scanf("%d", &a);
    return a;
}
int Decision(){
    int a;
    printf("\033[0;33m¿Ahora que quiere hacer?\033[0m \033[0;34m(Presione 0 si quiere sumar, 1 si quiere restar, 2 si quiere dividir, 3 si quiere multiplicar)\033[0m\n");
    scanf("%d", &a);
    return a;
}
void proceso(float num1, float num2, int decision){
    float resultado;
    switch(decision){
        case 0: printf("\033[0;33mUsted eligio la suma.\033[0m\n ");
                resultado = num1 + num2;
                printf("\033[0;33mSu suma es:\033[0m %.2f + %.2f = %.2f", num1, num2, resultado);
                break;
                
        case 1: printf("\033[0;33mUsted eligio la resta.\033[0m\n ");
                resultado = num1 - num2;
                printf("Su resta es:\033[0m %.2f - %.2f = %.2f", num1, num2, resultado);
                break;
                
        case 2: printf("\033[0;33mUsted eligio la division por lo que \033[0m");
                resultado = num1 / num2;
                printf("\033[0;33mSu division es:\033[0m %.2f / %.2f = %.2f", num1, num2, resultado);
                break;
        
        case 3: printf("\033[0;33mUsted eligio la multiplicacion por lo que \033[0m");
                resultado = num1 * num2;
                printf("\033[0;33mSu multiplicacion es:\033[0m %.2f * %.2f = %.2f", num1, num2, resultado);
                break;
        
        default: printf("\033[0;34mNo eligio ninguna opcion, porfavor, reinicie el programa.\033[0m");
                 break;
    }
}
