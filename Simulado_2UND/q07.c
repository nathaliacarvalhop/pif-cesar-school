#include <stdio.h>

int ehPrimo(int n);

int main(void) {
    int N;

    printf("Digite um inteiro: ");
    scanf("%d", &N);

    printf("Numeros primos de 1 ate %d:\n", N);
    for (int i = 2; i <= N; i++)
        if (ehPrimo(i)) printf("%d ", i);
    printf("\n");
    return 0;
}

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}
