#include <stdio.h>

int main(){

    int tempo, horas, minutos, segundos;


    puts("DIgite um determinado tempo em segundo: ");
    scanf("%d", tempo);

    horas = tempo / 3600;
    tempo -= horas * 3600;

    minutos = tempo / 60;
    tempo -= minutos * 60;

    segundos = tempo;

    printf("O tempo informado possui: %d horas %d minutos %d segundos", horas, minutos, segundos);

    return 0;
}