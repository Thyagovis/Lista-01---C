#include <stdio.h>

int main(){

    float v_hora, bruto, liquido;
    int desc, n_horas;

    puts("Digite o valor da hora aula do professor: ");
    scanf("%f", &v_hora);

    puts("Digite quantas horas o professor trabalhou esse mes: ");
    scanf("%d", &n_horas);

    puts("Digite o valor do desconto do inss em %: ");
    scanf("%d", &desc);

    bruto = v_hora * n_horas;
    liquido = bruto * (1 - ((float) desc) / 100);

    printf("Valor bruto: %.2f\nValor Liquido: %.2f", bruto, liquido);

    return 0;
}