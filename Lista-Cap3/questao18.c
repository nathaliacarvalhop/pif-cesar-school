#include <stdio.h>

int main(void) {
    int numero, original, invertido = 0, digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 0;
    }

    original = numero;

    if (numero == 0) {
        invertido = 0;
    } else {
        while (numero > 0) {
            digito = numero % 10;
            invertido = invertido * 10 + digito;
            numero /= 10;
        }
    }

    printf("Numero original: %d\n", original);
    printf("Numero invertido: %d\n", invertido);

    return 0;
}
