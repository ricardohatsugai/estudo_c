/* Incremento de contador toda vez que é executado */

#include <stdio.h>

int main(){
    int contador=0;

    while (++contador <= 10)
        printf("%d\n", contador);

    return 0;
}
