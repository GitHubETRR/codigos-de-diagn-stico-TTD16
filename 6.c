#include <stdio.h>

int main(){
    int v[10], n1, n2=0;
    
    printf("Ingrese 10 numeros:\n");
    
    for(int i=0;i<10;i++){
        scanf("%d", &v[i]);
    }
    
    printf("Ingrese un numero: ");
    scanf("%d", &n1);
    
    for(int i=0;i<10;i++){
        if(n1 == v[i]){
            n2++;
        }
        if(n1 == v[i]){
            printf("Posicion: %d\n", i);
        }
    }
    printf("Su numero se repitio %d veces\n", n2);
    
    if(n2==0){
        printf("NO EXISTE");
    }
}
