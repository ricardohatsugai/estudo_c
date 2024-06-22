/* Projeto....: Exercicio02.c
 * Autor......: Ricardo Hatsugai
 * Data.......: 22/06/2024
 * Versão.....: 1.0 
 * Finalidade.: Escreva um programa que contenha duas variáveis inteiras. 
 * Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
 */

#include <stdio.h>
#include <stdlib.h>


int main(){
    int a,b;
    int *va=&a,*vb=&b;
    
    printf("\nEntre com o valor da variavel A: ");
    scanf("%d", &va);

    printf("\nEntre com o valor da variavel B: ");
    scanf("%d", &vb);

    if(va > vb){
        printf("\nO endereco de memoria VA(%p), é maior que VB(%p)\n", (void*)va, (void*)vb);
    } else if(vb > va){
        printf("\nO endereco de memoria VB(%p), é maior que VA(%p)\n", (void*)vb, (void*)va);
    } else {
        printf("\nOs enderecos de memoria sao iguais (%p)\n", (void*)va);
    }

    return 0;
}

