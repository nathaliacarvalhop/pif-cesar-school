#include <stdio.h>

int main(void) {
    int i;
    long long int soma = 0;
    long long int quadrado;

    for (i = 1; i <= 100; i++) {
        quadrado = (long long int)i * i;
        printf("%d -> %lld\n", i, quadrado);
        soma += quadrado;
    }

    printf("\nSoma total dos quadrados = %lld\n", soma);

    return 0;
}
