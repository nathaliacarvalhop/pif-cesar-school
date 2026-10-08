#include <stdio.h>

int main(void) {
    int saque, restante;
    int qtd100 = 0, qtd50 = 0, qtd20 = 0;
    int qtd10 = 0, qtd5 = 0, qtd2 = 0;

    printf("Digite o valor do saque (R$): ");
    scanf("%d", &saque);

    if (saque <= 0) {
        printf("Valor de saque invalido.\n");
        return 0;
    }

    restante = saque;

    while (restante >= 100) {
        restante -= 100;
        qtd100++;
    }

    while (restante >= 50) {
        restante -= 50;
        qtd50++;
    }

    while (restante >= 20) {
        restante -= 20;
        qtd20++;
    }

    while (restante >= 10) {
        restante -= 10;
        qtd10++;
    }

    while (restante >= 5) {
        restante -= 5;
        qtd5++;
    }

    while (restante >= 2) {
        restante -= 2;
        qtd2++;
    }

    if (restante != 0) {
        printf("Nao e possivel formar exatamente o valor com as cedulas disponiveis.\n");
        return 0;
    }

    printf("\nCedulas utilizadas:\n");
    if (qtd100 > 0) printf("R$ 100: %d\n", qtd100);
    if (qtd50 > 0)  printf("R$ 50: %d\n", qtd50);
    if (qtd20 > 0)  printf("R$ 20: %d\n", qtd20);
    if (qtd10 > 0)  printf("R$ 10: %d\n", qtd10);
    if (qtd5 > 0)   printf("R$ 5: %d\n", qtd5);
    if (qtd2 > 0)   printf("R$ 2: %d\n", qtd2);

    printf("Total de cedulas: %d\n",
           qtd100 + qtd50 + qtd20 + qtd10 + qtd5 + qtd2);

    return 0;
}
