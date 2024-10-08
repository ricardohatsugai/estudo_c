#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Banda{
    char nome[30];
    char cd[30];
    int ano;
    struct Banda *proximo;
};

struct Banda * cria(void){
    return NULL;
};

struct Banda * insere(struct Banda * l, char * nome, char * cd, int ano){
    struct Banda * novo = (struct Banda *) malloc(sizeof(struct Banda));
    strcpy(novo->nome, nome);
    strcpy(novo->cd, cd);
    novo->ano=ano;
    novo->proximo=l;
    return novo;
};

void imprime(struct Banda * l){
    struct Banda * p;
    for(p=l;p!=NULL;p=p->proximo){
        printf("Banda = %s \n", p->nome);
        printf("CD = %s \n", p->cd);
        printf("Ano = %d \n", p->ano);
    }
};

int busca(struct Banda * l, char * nome){
    struct Banda * p;
    int i=1;
    for(p=l;p!=NULL;p=p->proximo){
        if(strcmp(nome, p->nome) == 0){
            printf("Banda: %s \n", p->nome);
            return i;
        }
        i++;
    }
    return 0;
};

int main(){
    char grupo[30], disco[30];
    int year;
    struct Banda * l;
    char resp='s';
    char procura[30];

    l=cria();

    while(resp!='n'){
        printf("Qual é a banda? \n");
        scanf("%s",grupo);
        fflush(stdin);
        printf("Qual eo CD? \n");
        scanf("%s", disco);
        fflush(stdin);
        printf("Qual e o ano? \n");
        scanf("%d", &year);
        fflush(stdin);
        l=insere(l, grupo, disco, year);
        printf("Continua? s/n \n");
        scanf("%c", &resp);
        fflush(stdin);
    }

    imprime(l);
    printf("Qual banda quer procurar? \n");
    scanf("%s", procura);
    printf("Esta banda esta no elemento %d \n", busca(l, procura));

    return 0;
}