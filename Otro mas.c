#include <stdio.h>

int main(){
    int n1, n2, n3;
    int c, decision;
    
    do{
        printf("Ingrese 2 numeros:\n");
        scanf("%d %d", &n1, &n2);
    
        printf("---Ingrese su operacion---\n 1-SUMA\n 2-RESTA\n 3-MULTIPLICACION\n 4-DIVISION\n");
        scanf("%d", &c);
    
        switch(c){
            case 1: n3=n1+n2;
                    printf("Su suma es de %d\n", n3);
                    break;
                    
            case 2: n3=n1-n2;
                    printf("Su resta es igual a %d\n", n3);
                    break;
                    
            case 3: n3=n1*n2;
                    printf("Su multiplicacion es igual a %d\n", n3);
                    break;
                    
            case 4: n3=n1/n2;
                    printf("Su division es igual a %d\n", n3);
                    break;
        }
        printf("¿Desea hacer otro calculo?\n 1-SI\n 2-NO\n");
        scanf("%d", &decision);
    }while(decision != 2);
    printf("Se acabo");
}
