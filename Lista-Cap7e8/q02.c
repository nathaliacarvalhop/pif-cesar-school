#include <stdio.h>
#define TAMANHO 15

int main(void) {
    int vet[TAMANHO], n = 0, num;

    do {
        printf("Numero (0 encerra): ");
        scanf("%d", &num);

        if (num != 0) {
            if (n == TAMANHO) {
                printf("BUFFER LOTADO\n");
                break;
            }
            vet[n++] = num;
        }
    } while (num != 0 && n < TAMANHO);

    if (n == TAMANHO) printf("BUFFER LOTADO\n");

    printf("Valores na ordem inversa:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    return 0;
}
