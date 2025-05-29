//Listas enlazadas

#include <stdio.h>
#include <stdlib.h>

struct alumnos{
    unsigned char* nombre;
    unsigned char* apellido;        //Creamos la estructura con punteros
    struct alumnos *siguiente;
}alumno1, alumno2, alumno3, alumno4;

int main(){
    struct alumnos *p = &alumno1;   //Con el puntero de la estructura ordeno los alumnos
    alumno1.siguiente = &alumno2;
    alumno2.siguiente = &alumno3;
    alumno3.siguiente = &alumno4;
    alumno4.siguiente = NULL;
    alumno1.nombre = "Israel";
    alumno1.apellido = "Pavelek";
    alumno2.nombre = "Eduardo";
    alumno2.apellido = "Perez";
    alumno3.nombre = "Juan";
    alumno3.apellido = "Lopez";
    alumno4.nombre = "Agustina";
    alumno4.apellido = "Sanchez";
    
    while(p -> siguiente != NULL){
        printf("Nombre del alumno: %s \n ", p -> nombre);
        printf("Apellido del alumno: %s \n ", p -> apellido);
        p = p->siguiente;
    }
    printf("Nombre del alumno: %s \n", p -> nombre);
    printf("Apellido del alumno: %s \n ", p -> apellido);
    return 0;
}
