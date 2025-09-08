#include <stdio.h>

int main(){

    float altura;
    char sexo;

    puts("Digite sua altura[em metros]: ");
    scanf(" %f", &altura);

    puts("Digite seu sexo [M/F]: ");
    scanf(" %c", &sexo);

    if(sexo == 'M'){

        printf("O seu peso ideal seria: %f", 72.7 * altura - 58);
    }
    else{

        printf("O seu peso ideal seria: %f", 62.1 * altura - 44.7);
    }
    return 0;
}