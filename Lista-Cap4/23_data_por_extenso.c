#include <stdio.h>

int main(void) {
    int dia, mes, ano;
    const char *nomeMes;

    printf("Digite dia, mes e ano: ");
    if (scanf("%d %d %d", &dia, &mes, &ano) != 3) return 1;

    switch (mes) {
        case 1: nomeMes = "janeiro"; break;
        case 2: nomeMes = "fevereiro"; break;
        case 3: nomeMes = "marco"; break;
        case 4: nomeMes = "abril"; break;
        case 5: nomeMes = "maio"; break;
        case 6: nomeMes = "junho"; break;
        case 7: nomeMes = "julho"; break;
        case 8: nomeMes = "agosto"; break;
        case 9: nomeMes = "setembro"; break;
        case 10: nomeMes = "outubro"; break;
        case 11: nomeMes = "novembro"; break;
        case 12: nomeMes = "dezembro"; break;
        default:
            printf("Mes invalido.\n");
            return 1;
    }

    if (dia < 1 || dia > 31 || ano < 1) {
        printf("Data invalida.\n");
        return 1;
    }

    printf("%d de %s de %d\n", dia, nomeMes, ano);
    return 0;
}
