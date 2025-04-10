//Suma de numeros

#include <stdio.h>
#include <stdint.h>

int32_t main(){
    int32_t num, num2, num3, d, resu, resunuevo;
    printf("\033[33;1mBienvenido al sumador de numeros\nPara comenzar, ingrese 2 numeros\n\033[0m");
    printf("\033[34;1mNumero 1: \033[0m");
    scanf("%d", &num);
    printf("\033[34;1mNumero 2: \033[0m");
    scanf("%d", &num2);
    
    resu = num + num2;
    
    printf("\033[34;1mResultado \033[0m= %d + %d => %d\n", num, num2, resu); 
    printf("\033[33;1m¿Quiere sumar un numero mas? \033[0m \033[35;1m(ingrese 1 si quiere, un 0 si no quiere)\n \033[0m");
    scanf("%d", &d);
    switch(d){
        case 1: printf("\033[33;1mIngrese el numero que quiere sumar al resultado\033[0m\n");
                printf("\033[34;1mNumero 3: \033[0m");
                scanf("%d", &num3);
                
                resunuevo = resu + num3;
                
                printf("\033[33;1mResultado nuevo\033[0m = %d + %d => %d", resu, num3, resunuevo);
                break;
                
        case 0: printf("\033[33;1mSu resultado quedo como \033[0m'%d'", resu);
                break; 
                
        default: printf("\033[33;1mDecision invalida\033[0m");
                 break;
    }
}
