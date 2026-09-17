#include <stdio.h>

int main() {
    int numero;
    float decima;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    decima = numero / 10.0;

    printf("Quadrado: %d\n", numero * numero);
    printf("Decima parte: %.2f\n", decima);

    return 0;
}
