#include <stdio.h>

int main(void) {
    int idade, dia;
    float valor = 40.0f;

    printf("Idade do cliente: ");
    scanf("%d", &idade);
    printf("Dia da semana (1=Domingo, ..., 7=Sabado): ");
    scanf("%d", &dia);

    if (idade < 0 || dia < 1 || dia > 7) {
        printf("Dados invalidos.\n");
        return 1;
    }

    if (dia == 4 || idade < 12 || idade > 60)
        valor = valor / 2.0f;

    printf("Valor do ingresso: R$ %.2f\n", valor);
    return 0;
}
