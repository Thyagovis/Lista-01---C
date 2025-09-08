#include <stdio.h>

int main(){

    int num;

    puts("DIgite um numero: ");
    scanf("%d", &num);

    num % 2 == 0? puts("O numero é par"): puts("O numero é impar");
}
