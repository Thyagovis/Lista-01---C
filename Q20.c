#include <stdio.h>

int main(){

    int num1, num2;

    puts("Digite um numero: ");
    scanf("%d", &num1);

    puts("Digite outro numero: ");
    scanf("%d", &num2);

    num1 % num2 == 0? puts("O primeiro é multiplo do segundo!") : puts("O primeiro não é multiplo do segundo!");

    return 0;
}