#include <stdio.h>

int main(void) {
    int A, B, i;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    if (A <= B) {
        for (i = A; i <= B; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = A; i >= B; i--) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
