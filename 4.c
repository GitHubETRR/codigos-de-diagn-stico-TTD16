#include <stdio.h>

int main(){
    int v[10];
    
    printf("Ingrese 10 numeros:\n");
    
    for(int i=0;i<10;i++){
        do{
            scanf("%d", &v[i]);
        }while(v[i]<0 || v[i]>50);
    }
    
    int mayor = v[0];
    int menor = v[0];
    int suma = 0;
    int cantidad = sizeof(v)/sizeof(v[0]);
    
    for(int i=0;i<10;i++){
        if(mayor<v[i]){
            mayor = v[i];
        }
        if(menor>v[i]){
            menor = v[i];
        }
        
        suma+= v[i];
    }
    float promedio = suma / cantidad;
    
    printf("NUMERO MAYOR = %d\n", mayor);
    printf("NUMERO MENOR = %d\n", menor);
    printf("PROMEDIO = %f\n", promedio);
    return 0;
}
