#include <stdio.h>

int main() {
    int n, absoluto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    absoluto = (n + (n >> 31)) ^ (n >> 31);

    printf("Valor absoluto: %d\n", absoluto);

    return 0;
}
