#include <stdio.h>

int main() {
    int v[10];
    printf("Ingrese 10 valores:\n");
    
    for(int i=0;i<10;i++){
        do{
            scanf("%d", &v[i]);
    }while(v[i]<0 || v[i]>100);
    }
    printf("---VECTOR---\n");
    for(int i=0;i<10;i++){
        printf("%d ", v[i]);
    }
    
    printf("\nEliga que indice borrar (0-9): ");
    int indice;
    scanf("%d", &indice);
    
    if(indice >=0 || indice <9){
        for(int i = indice;i<9;i++){
            v[i]=v[i+1];
        }
        
        printf("---VECTOR RESULTANTE---\n");
        for(int i = 0;i<9;i++){
            printf("%d ", v[i]);
        }
    }
    else{
        printf("INVALIDO");
    }
    return 0;
}
