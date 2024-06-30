#include <stdio.h>
#include <stdlib.h>
#include "estruturas.h"


void inserirInicio(Lista *lista, int valor){
    No *novo = (No*)malloc(sizeof(No));
    novo->valor = valor; // Equivale a (*novo).valor = valor;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    lista->tam++;
}

// Imprime a lista
void imprimir(Lista *lista){
    No *inicio = lista->inicio;
    printf("Tamanho da lista: %d\n", lista->tam);
    while(inicio != NULL){
        printf("%d ", inicio->valor);
        inicio = inicio->proximo;
    }
    printf("\n\n");
}

// Inserir no final da lista
void inserirFim(Lista *lista, int valor){
    No *no, *novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;
    if(lista->inicio == NULL){
        lista->inicio = novo;
    }else{
        no = lista->inicio;
        while(no->proximo != NULL)
            no = no->proximo;
        no->proximo = novo;
    }
    lista->tam++;
}
