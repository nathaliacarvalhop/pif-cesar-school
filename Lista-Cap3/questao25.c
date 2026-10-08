#include <stdio.h>

int main(void) {
    int N, i, divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O numero deve ser positivo.\n");
        return 0;
    }

    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores: %d\n", divisores);

    if (N > 1 && divisores == 2) {
        printf("%d e primo.\n", N);
    } else {
        printf("%d nao e primo.\n", N);
    }

    return 0;
}
