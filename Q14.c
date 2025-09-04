#include <stdio.h>

int main(){

    int dias;
    float bruto, liquido;

    puts("Quantos dias uteis o funcionario trabalhou: ");
    scanf("%d", &dias);

    bruto = (dias * 50.25);

    if(dias > 20){

        liquido = bruto * 1.3;

    }
    else
    if(dias > 10){

        liquido = bruto * 1.2;

    };

    liquido *= 0.9;

    printf("O Valor liquido que o funcionario vai receber e de: %f", liquido);

    return 0;
}