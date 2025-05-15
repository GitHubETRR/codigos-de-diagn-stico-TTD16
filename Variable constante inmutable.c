//Variable constante inmutable

#include <stdio.h>
#define IVA 0.21

int main(){
    float precio, pagar;
    
    printf("Ingrese el valor de su producto\n");
    scanf("%f", &precio);
    
    pagar = (1+IVA)*precio;
    
    printf("Ustede debe pagar $%f con IVA", pagar);
}
