#include <stdio.h>

int ehPrimo(int n);

int main(void) {
    int n;
    printf("Digite um inteiro: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }
    printf("%d %s primo.\n", n, ehPrimo(n) ? "e" : "nao e");

    printf("Primos de 1 a 50: ");
    for (int i = 1; i <= 50; i++) {
        if (ehPrimo(i)) printf("%d ", i);
    }
    printf("\n");
    return 0;
}

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int divisor = 2; divisor <= n / divisor; divisor++) {
        if (n % divisor == 0) return 0;
    }
    return 1;
}
