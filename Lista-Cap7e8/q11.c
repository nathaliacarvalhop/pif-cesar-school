#include <stdio.h>

int main(void) {
    int ocup[3][2][4], totalGeral = 0;

    for (int b = 0; b < 3; b++) {
        for (int a = 0; a < 2; a++) {
            for (int ap = 0; ap < 4; ap++) {
                printf("Moradores - bloco %d, andar %d, apartamento %d: ",
                       b + 1, a + 1, ap + 1);
                scanf("%d", &ocup[b][a][ap]);
                if (ocup[b][a][ap] < 0) ocup[b][a][ap] = 0;
            }
        }
    }

    for (int b = 0; b < 3; b++) {
        int totalBloco = 0;
        for (int a = 0; a < 2; a++)
            for (int ap = 0; ap < 4; ap++) totalBloco += ocup[b][a][ap];
        printf("Total do bloco %d: %d moradores\n", b + 1, totalBloco);
        totalGeral += totalBloco;
    }

    printf("Total geral do condominio: %d moradores\n", totalGeral);
    return 0;
}
