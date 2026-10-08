#include <stdio.h>

int main(void) {
    int N, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Erro: nao existe fatorial de numero negativo.\n");
        return 0;
    }

    for (i = 1; i <= N; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", N, fatorial);

    return 0;
}
