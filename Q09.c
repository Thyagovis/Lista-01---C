#include <stdio.h>

int main(){

    float volume, comprimento, altura, largura;

    puts("Digite o comrpimento da caixa: ");
    scanf(" %f", &comprimento);

    puts("Digite a altura da caixa: ");
    scanf(" %f", &altura);

    puts("Digite a largura da caixa: ");
    scanf(" %f", &largura);

    volume = largura * comprimento * altura;

    printf("O volume da caixa de: %.2f cm3", volume);
    return 0;
}