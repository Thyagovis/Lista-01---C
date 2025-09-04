#include <stdio.h>

int main(){

    float raio, diametro, circunferencia, area;
    float pi = 3.14159;

    puts("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    circunferencia = 2  * pi * raio;
    area = pi *( raio * raio);

    printf("Diametro: %.2f\nCircunferencia: %.2f\nArea: %.2f", diametro, circunferencia, area);

    return 0;
}