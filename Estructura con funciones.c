//Estructura con funciones
#include <stdio.h>

void bienvenida();
void datos();
int resultado();
void mostrarresultado();

struct num{
    int num1;
    int num2;
    int num3;
    int total;
}var;

int main(){
    bienvenida();
    datos();
    resultado();
    mostrarresultado();
}
void bienvenida(){
    printf("\033[0;32mBienvenido al programa que suma 3 numeros y muestra el resultado \n");
    printf("Para comenzar, porfavor ingrese los 3 numeros a sumar:\033[0m\n");
}
void datos(){
    scanf("%d ", &var.num1);
    scanf("%d", &var.num2);
    scanf("%d", &var.num3);
}
int resultado(){
    var.total = var.num1 + var.num2 + var.num3;
}
void mostrarresultado(){
    printf("\033[0;32mSu suma es:\033[0m %d + %d + %d = %d", var.num1, var.num2, var.num3, var.total);
}
