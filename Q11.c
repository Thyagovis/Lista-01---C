#include <stdio.h>

int main(){

    int num1, num2;

    puts("Digite o primeiro numero: ");
    scanf("%d", &num1);

    puts("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Soma: %d\nSubtracao: %d\nproduto: %d\nQuociente: %d\nResto: %d", num1 + num2, num1 - num2, num1 * num2, num1 / num2, num1 % num2);

    return 0;
}