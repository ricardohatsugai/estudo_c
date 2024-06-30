/* Função recursiva fibanacci */

#include <stdio.h>

long fibonacci(long n); // protótipo de função

int main(void){
    long result; /*valor de fibonacci */
    long number; /* número fornecido pelo usuário */

    /* obtém inteiro do usuário */
    printf("Digite um numero inteiro: ");
    scanf("%ld", &number);

    /* Calcula valor de fibonacci para numero informado pelo usuario */
    result = fibonacci(number);

    /* mostra resultado */
    printf("Fibonacci(%ld) = %ld\n", number, result);
    
    return 0;
}

/* Definicição recursiva da função fibonacci */
long fibonacci(long n){
    if(n == 0 | n == 1){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
