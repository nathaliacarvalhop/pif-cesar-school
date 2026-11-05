#include <stdio.h>

int main(void) {
    double valor, aliquota;
    int estado;

    printf("Digite o valor do produto: ");
    if (scanf("%lf", &valor) != 1 || valor < 0) return 1;
    printf("Estado (1 = MG, 2 = SP, 3 = RJ, 4 = MS): ");
    if (scanf("%d", &estado) != 1) return 1;

    switch (estado) {
        case 1: aliquota = 0.07; break;
        case 2: aliquota = 0.12; break;
        case 3: aliquota = 0.15; break;
        case 4: aliquota = 0.08; break;
        default:
            printf("Erro: estado invalido.\n");
            return 1;
    }

    printf("Preco final: R$ %.2f\n", valor * (1 + aliquota));
    return 0;
}
