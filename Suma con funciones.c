//Suma con funciones.

#include <stdio.h>

int suma();
void bienvenida_resultado();
int repetir();

int main(){
    int a,c=0, i=-1;
        do{
            bienvenida_resultado();
            a = repetir();
            i++;
        }while(a!=0);
        printf("Usted a repetido un total de %d veces", i);
}
int suma(){
    int a, b, r, c=0;
    scanf("%d %d", &a, &b);
    r = a+b;
    return r;
}
void bienvenida_resultado(){
    printf("\033[0;32mBienvenido al programa que suma 2 valores. \nPara comenzar, ingrese 2 valores cualesquiera:\033[0m\n");
    printf("\033[0;32mLa suma de sus dos valores es %d\033[0m", suma());
}
int repetir(){
    int a;
    printf("\n\033[0;32m¿Desea repetir el proceso?\033[0m\n\033[0;33m(ingrese 0 si no quiere, ingrese cualquier valor si quiere repetirlo)\033[0m\n");
    scanf("%d", &a);
    return a;
}
