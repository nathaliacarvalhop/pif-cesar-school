#include <stdio.h>

void contagem(int n);
void contagemCrescente(int atual, int limite);

int main(void) {
    int n;
    printf("Digite um numero positivo: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Valor invalido.\n");
        return 1;
    }
    printf("Contagem regressiva: ");
    contagem(n);
    printf("Contagem crescente: ");
    contagemCrescente(1, n);
    return 0;
}

void contagem(int n) {
    if (n <= 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d ", n);
    contagem(n - 1);
}

void contagemCrescente(int atual, int limite) {
    if (atual > limite) return;
    contagemCrescente(atual + 1, limite); /* A chamada vem antes do printf para imprimir na volta. */
    printf("%d ", atual);
    if (atual == 1) printf("\n");
}
