#include <stdio.h>
#include <limits.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int n;
    long iterativo, recursivo;
    printf("Digite um inteiro entre 0 e 12: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 12) {
        printf("Valor invalido para este programa.\n");
        return 1;
    }
    iterativo = fatorialIterativo(n);
    recursivo = fatorialRecursivo(n);
    printf("Iterativo = %ld\nRecursivo = %ld\n", iterativo, recursivo);
    printf("Os resultados %s.\n", iterativo == recursivo ? "coincidem" : "nao coincidem");
    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    for (int i = 2; i <= n; i++) resultado *= i;
    return resultado;
}

long fatorialRecursivo(int n) {
    if (n <= 1) return 1;
    return n * fatorialRecursivo(n - 1);
}
