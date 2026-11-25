#include <stdio.h>
#include <string.h>

int main(void) {
    char nomes[3][100], aux[100];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%99s", nomes[i]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }

    printf("Nomes em ordem alfabetica:\n");
    for (int i = 0; i < 3; i++) puts(nomes[i]);
    return 0;
}
