/* Projeto: ponteiro_com_cabecalho_01
 * Autor: Ricardo Hatsugai
 * Data: 30/06/2024
 * Vers�o: 1.0
 * Finalidade: Reescrever o programa lista encadeada, dividindo o programa em cabe�alho e arquivos de fun��es.
 */

#include <stdio.h>
#include <stdlib.h>
#include "estruturas.h"

int main(){
    Lista lista;
    int opcao, valor;
    lista.inicio = NULL;
    lista.tam = 0;

    do{
        printf("1 - Inserir no in�cio\n2 - Imprimir\n3 - Inserir no fim\n5 - Sair\n");
        scanf("%d", &opcao);
        switch(opcao){
        case 1:
            printf("Digite um valor a ser inserido: ");
            scanf("%d", &valor);
            inserirInicio(&lista, valor);
            break;
        case 2:
            imprimir(&lista);
            break;
        case 3:
            printf("Digite um valor a ser inserido no final: ");
            scanf("%d", &valor);
            inserirInicio(&lista, valor);
            break;
        case 5:
            printf("Finalizando...\n");
            break;
        default:
            printf("O��o inv�lida!\n");
        }
    }while(opcao != 5);

    return 0;
}
