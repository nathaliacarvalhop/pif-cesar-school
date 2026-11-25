#include <stdio.h>

int main(void) {
    int original[3][4], transposta[4][3];

    printf("Digite os elementos da matriz 3x4:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++) scanf("%d", &original[i][j]);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++) transposta[j][i] = original[i][j];

    printf("\nMatriz original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) printf("%5d", original[i][j]);
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) printf("%5d", transposta[i][j]);
        printf("\n");
    }
    return 0;
}
