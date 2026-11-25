#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char nomes[5][30];
    int maisLongo = 0, maisCurto = 0, mesmaInicial = 0;

    for (int i = 0; i < 5; i++) {
        printf("Nome %d: ", i + 1);
        scanf(" %29[^\n]", nomes[i]);
    }

    for (int i = 1; i < 5; i++) {
        if (strlen(nomes[i]) > strlen(nomes[maisLongo])) maisLongo = i;
        if (strlen(nomes[i]) < strlen(nomes[maisCurto])) maisCurto = i;
    }

    for (int i = 0; i < 5; i++)
        if (tolower((unsigned char) nomes[i][0]) ==
            tolower((unsigned char) nomes[0][0])) mesmaInicial++;

    printf("Nome mais longo: %s\n", nomes[maisLongo]);
    printf("Nome mais curto: %s\n", nomes[maisCurto]);
    printf("Nomes com a mesma inicial do primeiro: %d\n", mesmaInicial);
    return 0;
}
