#include <stdio.h>
#include <string.h>

int main(void) {
    char convidados[5][30];
    char procurado[30];
    int encontrado = 0;

    for (int i = 0; i < 5; i++) {
        printf("Nome do convidado %d: ", i + 1);
        scanf(" %29[^\n]", convidados[i]);
    }

    printf("Nome para procurar: ");
    scanf(" %29[^\n]", procurado);

    for (int i = 0; i < 5; i++) {
        if (strcmp(convidados[i], procurado) == 0) {
            printf("Nome encontrado na posicao %d.\n", i + 1);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) printf("Nome nao encontrado na lista.\n");
    return 0;
}
