#include <stdio.h>

int main(){
    int var1=5;
    int *prt_var;

    prt_var = &var1;

    printf("O conteúdo do ponteiro é %d.", *prt_var);

    *prt_var = 15;

    printf("\n\nO valor do ponteiro após a alteração é %d.\n\n", *prt_var);

    return 0;
}