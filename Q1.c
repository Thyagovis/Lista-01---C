#include <stdio.h>

int main(){

    int num;

    puts("Digite um numero em decimal: ");
    scanf("%d", &num);

    printf("O numero digitado hexadecimal e': %X\n", num);
    printf("O numero digitado em octal: %o\n", num);

    return 0;
}