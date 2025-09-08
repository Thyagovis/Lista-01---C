#include <stdio.h>

int main(){

    int num, quant;
    int base = 0b00000010;

    puts("Digite um numero: ");
    scanf("%d", &num);

    puts("Quantas vezes vc quer elevar um numero por 2: ");
    scanf("%d", &quant);

    base = base << (quant - 1);

    printf("%d x %d = %d", num, base, num * base);


    return 0;
}