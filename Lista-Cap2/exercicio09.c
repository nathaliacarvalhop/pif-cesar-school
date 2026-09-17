#include <stdio.h>

int main() {
    int numero1, numero2;
    float divisao;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    printf("Soma: %d\n", numero1 + numero2);
    printf("Subtracao: %d\n", numero1 - numero2);
    printf("Multiplicacao: %d\n", numero1 * numero2);

    // Para evitar divisao por zero, matematicamente o divisor deve ser diferente de zero.
    divisao = (float)numero1 / numero2;
    printf("Divisao real: %.2f\n", divisao);

    return 0;
}
