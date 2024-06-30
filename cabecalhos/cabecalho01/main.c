#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "calculos.h"

int main()
{
    setlocale(LC_ALL,"Portuguese");

    printf("Usando headers\n");
    int y = 5;
    int quad = quadrado(y);
    int cub = cubo(y);

    printf("O quadrado de %d: é %d\n", y, quad);
    printf("O cubo de %d: é %d\n", y, cub);
    printf("O valor da constante PI:%f\n", _PI);

    return 0;
}
