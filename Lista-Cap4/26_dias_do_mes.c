#include <stdio.h>

int main(void) {
    int mes, ano, dias;
    const char *nome;

    printf("Digite o mes (1 a 12) e o ano: ");
    if (scanf("%d %d", &mes, &ano) != 2) return 1;

    switch (mes) {
        case 1: nome = "janeiro"; dias = 31; break;
        case 2:
            nome = "fevereiro";
            dias = (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) ? 29 : 28;
            break;
        case 3: nome = "marco"; dias = 31; break;
        case 4: nome = "abril"; dias = 30; break;
        case 5: nome = "maio"; dias = 31; break;
        case 6: nome = "junho"; dias = 30; break;
        case 7: nome = "julho"; dias = 31; break;
        case 8: nome = "agosto"; dias = 31; break;
        case 9: nome = "setembro"; dias = 30; break;
        case 10: nome = "outubro"; dias = 31; break;
        case 11: nome = "novembro"; dias = 30; break;
        case 12: nome = "dezembro"; dias = 31; break;
        default:
            printf("Mes invalido.\n");
            return 1;
    }

    if (ano < 1) {
        printf("Ano invalido.\n");
        return 1;
    }
    printf("%s: %d dias\n", nome, dias);
    return 0;
}
