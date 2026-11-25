#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int lancamentos[30], frequencia[6] = {0};

    srand((unsigned) time(NULL));
    for (int i = 0; i < 30; i++) {
        lancamentos[i] = rand() % 6 + 1;
        frequencia[lancamentos[i] - 1]++;
    }

    printf("Lancamentos: ");
    for (int i = 0; i < 30; i++) printf("%d ", lancamentos[i]);
    printf("\n");

    for (int i = 0; i < 6; i++)
        printf("Face %d: %d vezes\n", i + 1, frequencia[i]);

    return 0;
}
