#include <stdio.h>

int main(){
    char v[20];
    int a=0,e=0,i=0,o=0,u=0;
    
    printf("Ingrese 20 letras:");
    
    for(int j=0;j<20;j++){
        scanf(" %c", &v[j]);
        
        switch(v[j]){
            case 'a':
            case 'A': a++;
                      break;
                      
            case 'e':
            case 'E': e++;
                      break;
            
            case 'i':
            case 'I': i++;
                      break;
                      
            case 'o':
            case 'O': o++;
                      break;
                      
            case 'u':
            case 'U': u++;
                      break;
        }
    }
    printf("Cantidad de a: %d\n", a);
    printf("Cantidad de e: %d\n", e);
    printf("Cantidad de i: %d\n", i);
    printf("Cantidad de o: %d\n", o);
    printf("Cantidad de u: %d\n", u);
    return 0;
}
