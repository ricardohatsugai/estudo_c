/* Projeto....: Exercicio01.c
 * Autor......: Ricardo Hatsugai
 * Data.......: 22/06/2024
 * Versão.....: 1.0 
 * Finalidade.: Escreva um programa que cntenha duas variáveis inteiras. Compare seus endereços e exiba o maior enderço.
 */

#include <stdio.h>
#include <stdlib.h>


int main(){
    int va,vb;
    int *pa = &va;
    int *pb = &vb;

    if(pa > pb)
        printf("\nO endereco de pa (%p) e  maior do que o endereco e pb (%p): \n\n", (void*)pa, (void*)pb);
    else if(pb > pa)
        printf("\nO endereco de pb (%p) e  maior do que o endereco e pa (%p): \n\n", (void*)pb, (void*)pa);
    else
        printf("Os enderecos de pa e pb sao iguais (%p)\n", (void*)pa);

    return 0;
}

