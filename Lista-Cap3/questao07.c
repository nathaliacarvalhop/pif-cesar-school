#include <stdio.h>

int main(void) {
    int i;

    printf("FOR:\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n\nWHILE:\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    printf("\n\nDO-WHILE:\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    printf("\n\n// O for e a estrutura mais adequada para este caso,\n");
    printf("// pois o intervalo de repeticao e conhecido.\n");

    return 0;
}
