#include <stdio.h>

int main(void) {
    int N, i;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite o numero do termo desejado: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Erro: N deve ser positivo.\n");
        return 0;
    }

    printf("Termos: ");

    if (N >= 1) {
        printf("1");
    }

    if (N >= 2) {
        printf(" 1");
    }

    for (i = 3; i <= N; i++) {
        proximo = anterior + atual;
        printf(" %lld", proximo);
        anterior = atual;
        atual = proximo;
    }

    printf("\nN-esimo termo = %lld\n", atual);

    return 0;
}
