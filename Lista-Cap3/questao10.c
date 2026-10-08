#include <stdio.h>

int main(void) {
    int i, multiplo;

    for (i = 1; i <= 100; i++) {
        multiplo = 3 * i;
        printf("%d\t", multiplo);

        if (i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
