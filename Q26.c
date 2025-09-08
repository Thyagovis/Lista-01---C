#include <stdio.h>
#include <math.h>

int main(){

    float num1, num2, num3;

    puts("Digite o primeiro numero: ");
    scanf(" %f", &num1);

    puts("Digite o segundo numero: ");
    scanf(" %f", &num2);

    puts("Digite o terceiro numero: ");
    scanf(" %f", &num3);

    printf("Media arimetica: %f\n", (num1 + num2 + num3) / 3);
    printf("Media geometrica: %f", pow((num1 * num2 * num3), 1.0/3.0));


    return 0;
}