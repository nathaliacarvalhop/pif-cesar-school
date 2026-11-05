#include <stdio.h>

int main(void) {
    int opcao;
    double entrada, saida;

    printf("1 - Celsius para Fahrenheit\n2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n4 - Kelvin para Celsius\n");
    printf("Escolha: ");
    if (scanf("%d", &opcao) != 1) return 1;
    printf("Temperatura: ");
    if (scanf("%lf", &entrada) != 1) return 1;

    switch (opcao) {
        case 1: saida = entrada * 1.8 + 32; break;
        case 2: saida = entrada + 273.15; break;
        case 3: saida = (entrada - 32) / 1.8; break;
        case 4: saida = entrada - 273.15; break;
        default:
            printf("Opcao invalida.\n");
            return 1;
    }

    printf("Temperatura convertida: %.2f\n", saida);
    return 0;
}
