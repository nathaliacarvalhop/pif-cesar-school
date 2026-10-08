#include <stdio.h>

int ehPrimo(int numero) {
    int i;

    if (numero < 2) {
        return 0;
    }

    for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int A, B, i, encontrou = 0;
    long long int soma = 0;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B (A < B): ");
    scanf("%d", &B);

    if (A >= B || A <= 0 || B <= 0) {
        printf("Valores invalidos. E necessario A < B e ambos positivos.\n");
        return 0;
    }

    printf("Primos no intervalo [%d, %d]:\n", A, B);

    for (i = A; i <= B; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
            soma += i;
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum primo encontrado.");
    }

    printf("\nSoma dos primos = %lld\n", soma);

    return 0;
}
