#include <stdio.h>

int main(){

    int a,b,c;

    puts("Digite o primeiro valor: ");
    scanf("%d", &a);

    puts("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("\nA: %d | B: %d", a, b);

    c = a;
    a = b;
    b = c;

    printf("A: %d | B: %d", a, b);

    return 0;
}