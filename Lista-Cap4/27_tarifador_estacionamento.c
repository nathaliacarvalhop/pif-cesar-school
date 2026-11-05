#include <stdio.h>

int main(void) {
    int horas;
    double total = 0.0;

    printf("Horas inteiras de permanencia: ");
    if (scanf("%d", &horas) != 1 || horas < 1) {
        printf("Tempo invalido.\n");
        return 1;
    }

    if (horas >= 1) total += 2.00;
    if (horas >= 2) total += 2.00;
    if (horas >= 3) total += 2.50;
    if (horas >= 4) total += 2.50;
    if (horas >= 5) total += (horas - 4) * 3.00;

    printf("Tempo total: %d hora(s)\nValor final: R$ %.2f\n", horas, total);
    return 0;
}
