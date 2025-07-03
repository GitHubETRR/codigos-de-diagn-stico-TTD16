#include <stdio.h>

struct mensaje{
    int tipo;
    union {
        int edad;
        char nombre[50];
    }contenido;
};

int main(){
    struct mensaje m;
    
    printf("Bienvenido, ingrese su edad (1) o nombre (2): ");
    scanf("%d", &m.tipo);
    
    if(m.tipo == 1){
        printf("Ingrese su edad: ");
        scanf("%d", &m.contenido.edad);
        if(m.contenido.edad < 18){
            printf("Usted es menor de edad");
        }else{
            printf("Usted es mayor de edad");
        }
    }else if(m.tipo == 2){
        printf("Ingrese su nombre: ");
        scanf("%s", m.contenido.nombre);
        printf("%s, bonito nombre", m.contenido.nombre);
    }else{
        printf("Ingreso un numero incorrecto, por favor reinicie el programa");
    }
    return 0;
}
