//Listas enlazadas

#include <stdio.h>
#include <stdlib.h>

void alumnos();
void proceso();


struct alumnos{
    char nombre[59];
    char apellido[59];        //Creamos la estructura con punteros
    int edad;
    int promedio;
    struct alumnos *siguiente;
}alumno1, alumno2, alumno3, alumno4;

int main(){
    printf("\033[0;32mBienvenido, ingrese el legajo de los 4 alumnos\033[0m\n");
    printf("\n\033[0;33mPrimer alumno\033[0m\n");
    alumnos(&alumno1);
    printf("\n\033[0;33mSegundo alumno\033[0m\n");
    alumnos(&alumno2);
    printf("\n\033[0;33mTercer alumno\033[0m\n");
    alumnos(&alumno3);
    printf("\n\033[0;33mCuarto alumno\033[0m\n");
    alumnos(&alumno4);

    proceso();
    return 0;

}
void alumnos(struct alumnos *alumno){
    printf("Nombre: ");
    scanf("%s", alumno -> nombre);
    printf("Apellido: ");
    scanf("%s", alumno -> apellido);
    printf("Edad: ");
    scanf("%d", &alumno -> edad);
    printf("Promedio: ");
    scanf("%d", &alumno -> promedio);
}
void proceso(){
    int i=0;
    struct alumnos *p = &alumno1;   //Con el puntero de la estructura ordeno los alumnos
    alumno1.siguiente = &alumno2;
    alumno2.siguiente = &alumno3;
    alumno3.siguiente = &alumno4;
    alumno4.siguiente = NULL;
    
    while(p -> siguiente != NULL){
        i++;
        printf("\n\033[0;31m---Alumno %d---\033[0m\n", i);
        printf("\033[0;34mNombre:\033[0m %s \n", p -> nombre);
        printf("\033[0;34mApellido:\033[0m %s \n", p -> apellido);
        printf("\033[0;34mEdad:\033[0m %d \n", p -> edad);
        printf("\033[0;34mPromedio:\033[0m %d \n", p -> promedio);
        p = p->siguiente;
    }
    printf("\n\033[0;31m---Alumno 4---\033[0m\n");
    printf("\033[0;34mNombre:\033[0m %s \n", p -> nombre);
    printf("\033[0;34mApellido:\033[0m %s \n", p -> apellido);
    printf("\033[0;34mEdad:\033[0m %d \n", p -> edad);
    printf("\033[0;34mPromedio:\033[0m%d \n", p -> promedio);
}
