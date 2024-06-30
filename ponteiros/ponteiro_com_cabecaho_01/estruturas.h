#ifndef ESTRUTURAS_H_INCLUDED
#define ESTRUTURAS_H_INCLUDED

typedef struct No{
    int valor;
    struct No *proximo;
}No;

typedef struct Lista{
    No *inicio;
    int tam;
}Lista;

void inserirInicio(Lista *lista, int valor);
void imprimir(Lista *lista);
void inserirFim();


#endif // ESTRUTURAS_H_INCLUDED
