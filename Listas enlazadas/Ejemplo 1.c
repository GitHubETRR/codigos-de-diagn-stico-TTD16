//Listas enlazadas

#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int valor;
    struct nodo* next;
};

int main(){
    struct nodo* nodo1 = malloc(sizeof(struct nodo));
    struct nodo* nodo2 = malloc(sizeof(struct nodo));
    struct nodo* nodo3 = malloc(sizeof(struct nodo));
    
    printf("Bienvenido, ingrese 3 valores: \n");
    scanf("%d %d %d", &nodo1->valor, &nodo2->valor, &nodo3->valor);
    
    nodo1->next = nodo2;
    nodo2->next = nodo3;
    nodo3->next = NULL;
    
    struct nodo* actual = nodo1;
    while(actual != NULL){
        printf("%d ->", actual->valor);
        actual = actual->next;
    }
    printf("NULL");
    
    free(nodo1);
    free(nodo2);
    free(nodo3);
    
    return 0;
}
