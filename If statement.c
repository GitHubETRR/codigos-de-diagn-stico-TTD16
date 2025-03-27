//If statement
#include <stdio.h>

void bienvenida();
int dato();
void proceso(int num);

int main(){
    int num;
    bienvenida();
    num = dato();
    proceso(num);
}
void bienvenida(){
    printf("\033[0;35m¡Bienvenido al programa que muestra en pantalla si el numero es par o inpar!\033[0m\n");
    printf("\033[0;35mPara comenzar, ingrese un numero: \033[0m\n");
}
int dato(){
    int a;
    scanf("%d", &a);
    return a;
}
void proceso(int num){
     if(num % 2 == 0){
        printf("\033[0;35mSu numero %d es par\033[0m", num);
    }else{
        printf("\033[0;35mSu numero  \033[0m%d \033[0;35m es inpar\033[0m", num);
    }
}
