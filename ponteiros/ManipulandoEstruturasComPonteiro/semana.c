#include <stdio.h>
#include <stdlib.h>

int main(){
    char *dia[] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado", 0};
    char **ptr_dia; /* *dia é um ponteiro para uma string e **ptr_dia é um ponteiro para um ponteiro uma string */

    ptr_dia = dia; // apontando ptr_dia para o início da matriz dia

    while (*ptr_dia){
        printf("%s \n",*ptr_dia);
        ptr_dia++;
    }
    

    return 0;
}