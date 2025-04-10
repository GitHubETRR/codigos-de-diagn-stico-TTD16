//Identificador de vocal o consonante

#include <stdio.h>
#include <stdint.h>

void bienvenida();
void proceso();
int32_t verificacion();
void despedida();

int32_t main(){
    int32_t d;
    bienvenida();
    do{
    proceso();
    d = verificacion();
    }while(d != 0);
    despedida();
}
void bienvenida(){
    printf("\033[31;1mBienvenido al programa que le permite verificar si una letra es consonante o vocal\nPara comenzar ingrese la letra que quiere verificar: \033[0m\n");

}
void proceso(){
    int8_t c;
    scanf("%c", &c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        printf("Perfecto, usted ingreso la letra \033[0m'%c'\033[31;1m que es una vocal\n\033[0m", c);
    }else if(c == 'b' || c == 'c' || c == 'd' || c == 'f' || c == 'g' || c == 'h' || c == 'j' || c == 'k' || c == 'l' || c == 'm' || c == 'n' || c == 'p' || c == 'q' || c == 'r' || c == 's' || c == 't' || c == 'v' || c == 'w' || c == 'x' || c == 'y' || c == 'z' || c == 'B' || c == 'C' || c == 'D' || c == 'F' || c == 'G' || c == 'H' || c == 'J' || c == 'K' || c == 'L' || c == 'M' || c == 'N' || c == 'P' || c == 'Q' || c == 'R' || c == 'S' || c == 'T' || c == 'V' || c == 'W' || c == 'X' || c == 'Y' || c == 'Z'){
        printf("\033[31;1mPerfecto, usted ingreso la letra \033[0m'%c'\033[31;1m que es una consonante\n\033[0m", c);    
    }else{
        printf("No ingreso una letra\n");
    }
}
int32_t verificacion(){
    int32_t d;
    printf("\033[32;1m¿Quiere volver a verificar una letra? (Presione 0 si no quiere, ingrese una letra si quiere verificarla)\033[0m\n");
    scanf("%d", &d);
    return d;
}
void despedida(){
    printf("\033[32;1mHasta luego\033[0m");
}
