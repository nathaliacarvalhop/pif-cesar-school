#include <stdio.h>

int main(void) {
    int N, linha, coluna;
    int numero = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N deve ser positivo.\n");
        return 0;
    }

    for (linha = 1; linha <= N; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d", numero);
            numero++;

            if (coluna < linha) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
