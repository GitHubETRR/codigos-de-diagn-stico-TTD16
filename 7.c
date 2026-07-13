#include <stdio.h>

int main(){
    int v[10], posi, n;
    
    printf("ingrese 9 valores:\n");
    for(int i=0;i<9;i++){
        scanf("%d", &v[i]);
    }
    
    printf("Ingrese la posicion y el numero: ");
    scanf("%d %d", &posi, &n);
    
    for(int i = 9; i>posi;i--){
        v[i]=v[i-1];
    }
    v[posi] = n;
    printf("Vector resultante:\n");
    for(int i=0;i<10;i++){
        printf("%d ", v[i]);
    }
