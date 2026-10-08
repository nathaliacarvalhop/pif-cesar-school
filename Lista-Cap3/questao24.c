#include <stdio.h>

int main(void) {
    int N, linha, coluna;

    printf("Digite uma dimensao impar (3 a 19): ");
    scanf("%d", &N);

    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Dimensao invalida. Digite um numero impar entre 3 e 19.\n");
        return 0;
    }

    for (linha = 0; linha < N; linha++) {
        for (coluna = 0; coluna < N; coluna++) {
            if (coluna == linha || coluna == N - 1 - linha) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
