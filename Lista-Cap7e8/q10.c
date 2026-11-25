#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define JOGOS 5

int main(void) {
    int jogos[JOGOS][6];
    srand((unsigned) time(NULL));

    for (int i = 0; i < JOGOS; i++) {
        for (int j = 0; j < 6; j++) {
            int numero, repetido;
            do {
                numero = rand() % 60 + 1;
                repetido = 0;
                for (int k = 0; k < j; k++)
                    if (jogos[i][k] == numero) repetido = 1;
            } while (repetido);
            jogos[i][j] = numero;
        }
    }

    for (int i = 0; i < JOGOS; i++) {
        printf("Jogo %d: ", i + 1);
        for (int j = 0; j < 6; j++) printf("%02d ", jogos[i][j]);
        printf("\n");
    }
    return 0;
}
