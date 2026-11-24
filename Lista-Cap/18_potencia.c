#include <stdio.h>

long potencia(int base, int expoente);

int main(void) {
    int base, expoente;
    printf("Digite a base e um expoente nao negativo: ");
    if (scanf("%d %d", &base, &expoente) != 2 || expoente < 0) {
        printf("Entrada invalida: o expoente deve ser nao negativo.\n");
        return 1;
    }
    printf("Resultado = %ld\n", potencia(base, expoente));
    return 0;
}

long potencia(int base, int expoente) {
    if (expoente == 0) return 1; /* Caso base: qualquer base nao nula elevada a zero e 1. */
    return base * potencia(base, expoente - 1); /* Passo recursivo. */
}
