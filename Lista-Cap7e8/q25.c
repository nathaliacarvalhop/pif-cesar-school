#include <stdio.h>

enum Mes { Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez };

int main(void) {
    int dmes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    enum Mes mes;
    int numero;

    printf("Informe o numero do mes (1 a 12): ");
    scanf("%d", &numero);

    switch (numero) {
        case Jan: mes = Jan; printf("Janeiro\n"); break;
        case Fev: mes = Fev; printf("Fevereiro\n"); break;
        case Mar: mes = Mar; printf("Marco\n"); break;
        case Abr: mes = Abr; printf("Abril\n"); break;
        case Mai: mes = Mai; printf("Maio\n"); break;
        case Jun: mes = Jun; printf("Junho\n"); break;
        case Jul: mes = Jul; printf("Julho\n"); break;
        case Ago: mes = Ago; printf("Agosto\n"); break;
        case Set: mes = Set; printf("Setembro\n"); break;
        case Out: mes = Out; printf("Outubro\n"); break;
        case Nov: mes = Nov; printf("Novembro\n"); break;
        case Dez: mes = Dez; printf("Dezembro\n"); break;
        default: printf("Mes invalido.\n"); return 1;
    }

    printf("\nDias de cada mes:\n");
    for (int i = Jan; i <= Dez; i++)
        printf("%d: %d dias\n", i, dmes[i - 1]);

    return 0;
}
