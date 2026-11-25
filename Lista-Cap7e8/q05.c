#include <stdio.h>

int somaVetor(int v[], int n);
int maiorValor(int v[], int n);
int buscaValor(int v[], int n, int x);

int main(void) {
    int v[8], x;

    for (int i = 0; i < 8; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Valor para buscar: ");
    scanf("%d", &x);

    printf("Soma: %d\n", somaVetor(v, 8));
    printf("Maior valor: %d\n", maiorValor(v, 8));
    printf("Posicao da primeira ocorrencia: %d\n", buscaValor(v, 8, x));
    return 0;
}

int somaVetor(int v[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) soma += v[i];
    return soma;
}

int maiorValor(int v[], int n) {
    int maior = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > maior) maior = v[i];
    return maior;
}

int buscaValor(int v[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (v[i] == x) return i;
    return -1;
}
