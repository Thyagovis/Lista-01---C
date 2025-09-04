#include <stdio.h>

int main() {
    
    short int horas, minutos, segundos;
    int total_segundos;

    printf("Digite a hora atual: ");
    scanf(" %hd", &horas);

    printf("Digite o minuto atual: ");
    scanf( "%hd", &minutos);

    printf("Digite os segundos atuais: ");
    scanf("%hd", &segundos);

    total_segundos = (horas * 3600) + (minutos * 60) + segundos;

    printf("\nhoras: %d minutos: %d segundos: %d", horas, minutos, segundos);

    printf("\nO total de segundos foi de: %d", total_segundos);

    return 0;
}
