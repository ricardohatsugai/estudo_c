/* Calculando juros composto */
#include <stdio.h>
#include <math.h>

int main(){
    double valor; // valor em depósito
    double principal=1000.0; // principal inicial
    double taxa = .05; // taxa anual de juros
    int ano;

    printf("%4s%21s\n", "Ano", "Valor na conta");

    for(ano=1; ano <= 10; ano++){
        valor = principal * pow(1.0 + taxa, ano);
    }


    return 0;
}
