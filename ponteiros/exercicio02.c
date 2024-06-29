/* Projeto....: Exercicio02.c
 * Autor......: Ricardo Hatsugai
 * Data.......: 24/06/2024
 * Versão.....: 1.0 
 * Finalidade.: Escrever um programa que contenha duas variáveis inteiras. 
 *              Leia essas variáveis do teclado. Em seguida, compare seus 
 *              endereços e exiba o conteúdo do maior endereço.
 */

#include <stdio.h>
#include <stdlib.h>


int main(){
    int a,b;
    int *va=&a,*vb=&b;
    
    printf("\nEntre com o valor da variável A: ");
    scanf("%d", &va);

    printf("\nEntre com o valor da variável B: ");
    scanf("%d", &vb);

    if(va > vb){
        printf("\nO endereço de memória VA(%p), é maior que VB(%p)\n", (void*)va, (void*)vb);
    } else if(vb > va){
        printf("\nO endereço de memória VB(%p), é maior que VA(%p)\n", (void*)vb, (void*)va);
    } else {
        printf("\nOs endereços de memória são iguais (%p)\n", (void*)va);
    }

    return 0;
}

