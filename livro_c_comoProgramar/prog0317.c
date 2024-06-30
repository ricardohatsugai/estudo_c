/* Consumo de gasolina -  */

#include <stdio.h>

int main(){
    float litros=0.0; // O Usuário informa quantos litros abasteceu
    float km=0.0; // O Usuário informa quantos quilometros dirigiu
    float consumo=0.0; // consumo = litros / km
    int x=0;

    while(x!=-1){
        printf("\nInforme quantos litros abasteceu: ");
        scanf("%f",&litros);
        printf("\nInforme quantos km dirigiu: ");
        scanf("%f",&km);
        consumo = km / litros;
        printf("\n\nO Consumo atual e de %.2f km/l.", consumo);
        printf("\n\n-1 para sair.");
        scanf("%d",&x);
    }

    return 0;
}
