#include <stdio.h>

int main(void) {
    int dmes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int dia, mes, passados = 0, totalAno = 365;

    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes (1 a 12): ");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12 || dia < 1 || dia > dmes[mes - 1]) {
        printf("Data invalida.\n");
        return 1;
    }

    for (int i = 0; i < mes - 1; i++) passados += dmes[i];
    passados += dia - 1;

    printf("Dias passados desde 1 de janeiro: %d\n", passados);
    printf("Dias que faltam para o fim do ano: %d\n", totalAno - passados - 1);
    return 0;
}
