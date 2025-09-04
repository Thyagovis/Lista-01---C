#include <stdio.h>

int main(){
    
    float real, dolar, cotacao;

    puts("Digite o valor em reais que vc quer converter: ");
    scanf("%f", &real);

    puts("Digite a cotacao atual do dolar: ");
    scanf("%f", &cotacao);

    dolar = real / cotacao;

    printf("Voce possui $%.2f", dolar);

    return 0;
}