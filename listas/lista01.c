#include <stdio.h>
#include <stdlib.h>

struct Lista{
    int valor;
    struct Lista * proximo; // ponteiro para o próxima entrada na lista    
};


int main(){
    struct Lista * inicio = NULL; 
    if(inicio == NULL){ // se a lista estiver vazia
        printf("Criando lista... \n");
        inicio = (struct Lista *) malloc (sizeof(struct Lista)); // alocamos espaço p/estrutura
        printf("Lista criada...\n");
        if(inicio != NULL){ // se a estrutura foi criada
            inicio -> valor = 100;
            inicio -> proximo = NULL; // não aponta para o próximo nó
        }
        printf("O valor da variavel do primeiro no eh %d \n", inicio -> valor);
    }
    

    return 0;
}