#include <stdio.h>

int main(){

    int num;
    puts("Digite um numero: ");
    scanf("%d", &num);

    printf("O triplo do seu numero: %d\nO quadrado do seu numero: %d\nA metade do seu numero: %.2f\n", num*3, num*num, ((float) num)/ 2);
    
    return 0;
}