//Borrar un numero
#include <stdio.h>

void bienvenida();
void proceso();

int main(){
    int num, decision;
    bienvenida();
    proceso();
}
void bienvenida(){
    printf("\033[30;1mBienvenido al programa que le permite borrar un numero del 0 al 10\033[0m\n");
    printf("\033[30;1mPara comenzar tendra que elegir un numero del 0 al 10:\033[0m \n"); 
}
void proceso(){
    int num;
    scanf("%d", &num);
    printf("\033[30;1mUsted elimino el %d\033[0m\n", num);
    for(int i=0;i<11;i++){
        if(i==num){
            continue;
        }
        printf("%d ", i);
    }
}
