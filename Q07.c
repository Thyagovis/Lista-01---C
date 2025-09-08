#include <stdio.h>

int main(){
    
    int num;

    puts("Digite o numero que sera colocado ao quadrado: ");
    scanf("%d", &num);

    printf("O numero digitado ao quadrado: %d", num * num);

    return 0;
}