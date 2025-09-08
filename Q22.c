#include <stdio.h>

int main(){

    int num, d1, d2, d3, inverso;

    puts("Digite um numero de 3 digitos: ");
    scanf("%d", &num);

    d1 = num / 100;
    d2 = (num / 10) % 10;
    d3 = num % 10;

    inverso = (d3 * 100) + (d2 * 10) + d1;

    printf("O numero digitado foi: %d\nO inverso foi: %d", num, inverso);


    return 0;
}