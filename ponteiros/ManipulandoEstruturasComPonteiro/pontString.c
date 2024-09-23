#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[30] = "FETEC Americana";
    char *ptr_str;

    ptr_str = nome;
    printf("A string eh referenciada por %c \n", *ptr_str);
    printf("A String exibida via ponteiro: \n");

    while(*ptr_str){
        putchar(*ptr_str);
        ptr_str++;
    };

    printf("\n");



    return 0;
}