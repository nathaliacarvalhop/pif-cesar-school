#include <stdio.h>

int main(void) {
    double valor, soma = 0.0, media;
    int quantidade = 0;

    while (1) {
        printf("Digite um valor positivo (negativo para parar): ");
        scanf("%lf", &valor);

        if (valor < 0) {
            break;
        }

        soma += valor;
        quantidade++;
    }

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("\nQuantidade de valores validos: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media: %.2f\n", media);
    } else {
        printf("\nNenhum valor valido foi digitado.\n");
        printf("Soma total: 0.00\n");
        printf("Media: 0.00\n");
    }

    return 0;
}
