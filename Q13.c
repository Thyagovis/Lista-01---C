#include <stdio.h>

int main(){

    float celsius, fah;

    puts("Digite a temperatura atual em celsius: ");
    scanf("%f", &celsius);

    fah = (celsius * 9 + 160)  / 5;

    printf("temperatura atual em fahrenheit: %.2f", fah);


    return 0;
}