#include <stdio.h>

int main(){

    int num, sucessor, antecessor;

    puts("Digite um numero: ");
    scanf("%d", &num);


    printf("\nSucessor: %d\nAntecessor: %d", num + 1, num -1);

    return 0;
}