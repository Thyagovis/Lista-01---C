#include <stdio.h>

int main(){

    float valor;
    float valor_total;

    puts("Digite o valor de consumo: ");
    scanf("%f", &valor);

    valor_total = valor * 1.1;

    printf("O valor total foi de: %.2f", valor_total);

    return 0;
}