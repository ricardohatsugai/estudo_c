#include <stdio.h>
#include <stdlib.h>

struct Pessoa{
    char nome[30];
    int idade;
};

alteracao(struct Pessoa *acesso){
    acesso->idade +=20;
};

int main(){
    struct Pessoa acesso;

    printf("Entre com o nome da Pessoa: \n");    
    gets(acesso.nome);
    printf("Entre com a idade da Pessoa: \n");
    scanf("%d", &acesso.idade);

    printf("Dados iniciais: \n");
    printf("Nome: %s \n", acesso.nome);
    printf("Idade: %d \n", acesso.idade);

    alteracao(&acesso);

    printf("Dados apos mudanças: \n");
    printf("Nome: %s \n", acesso.nome);
    printf("Idade: %d \n",acesso.idade);

    return 0;
}
