//Modificar variable, no constante

#include <stdio.h>
#define MAXIMO 3

int main(){
    int contador=0;
    
    for(contador;contador<=MAXIMO;contador++){
        printf("%d\n", contador);
    }
    printf("El contador llego al maximo que es %d", MAXIMO);
}
