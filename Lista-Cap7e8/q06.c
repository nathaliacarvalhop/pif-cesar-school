#include <stdio.h>

void imprimirMatriz(int m[3][3]);

int main(void) {
    int a[3][3], b[3][3], soma[3][3];

    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) scanf("%d", &a[i][j]);

    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) scanf("%d", &b[i][j]);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) soma[i][j] = a[i][j] + b[i][j];

    printf("\nMatriz A:\n"); imprimirMatriz(a);
    printf("\nMatriz B:\n"); imprimirMatriz(b);
    printf("\nSoma:\n"); imprimirMatriz(soma);
    return 0;
}

void imprimirMatriz(int m[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%5d", m[i][j]);
        printf("\n");
    }
}
