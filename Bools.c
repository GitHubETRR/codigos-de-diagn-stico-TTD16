//Bool

#include <stdbool.h>
#include <stdio.h>

int pedir_edad();

int main(){
    int edad;
    bool verificacion;
    edad = pedir_edad();
    verificacion = (edad >= 18);
    
    if(verificacion){
        printf("Usted es mayor de edad");
    }else{
        printf("Usted no es mayor de edad");
    }
}
int pedir_edad(){
    int edad;
    printf("Bienvenido, ingrese su edad: ");
    scanf("%d", &edad);
    return edad;
}
