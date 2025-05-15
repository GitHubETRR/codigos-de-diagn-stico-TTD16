//Lógicos

#include <stdio.h>

int main(){
    int edad, nota;
    
    printf("Bienvenido, ingrese su edad y nota\n");
    printf("Edad: ");
    scanf("%d", &edad);
    printf("Nota: ");
    scanf("%d", &nota);
    
    if(edad > 18 && nota > 6){
        printf("Usted es mayor de edad y esta aprobado");
    }else if(edad < 18 && nota > 6){
        printf("Usted no es mayor de edad y esta aprobado");
    }else if(edad > 18 && nota <= 6){
        printf("Usted es mayor de edad y esta desaprobado");
    }else if(edad < 18 && nota <= 6){
        printf("Usted no es mayor de edad y esta desaprobado");
    }
}
