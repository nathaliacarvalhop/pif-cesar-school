#include <stdio.h>

int main() {
    float altura_degrau, altura_total;
    int degraus;

    printf("Digite a altura de cada degrau em centimetros: ");
    scanf("%f", &altura_degrau);

    printf("Digite a altura total desejada em metros: ");
    scanf("%f", &altura_total);

    altura_total = altura_total * 100.0;

    degraus = (int)(altura_total / altura_degrau);

    if (degraus * altura_degrau < altura_total) {
        degraus++;
    }

    printf("Numero minimo de degraus: %d\n", degraus);

    return 0;
}
