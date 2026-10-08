#include <stdio.h>

int main(void) {
    int L, linha, coluna;

    printf("Digite a dimensao do quadrado (3 a 20): ");
    scanf("%d", &L);

    if (L < 3 || L > 20) {
        printf("Dimensao invalida.\n");
        return 0;
    }

    for (linha = 0; linha < L; linha++) {
        for (coluna = 0; coluna < L; coluna++) {
            if (linha == 0 || linha == L - 1 ||
                coluna == 0 || coluna == L - 1) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
