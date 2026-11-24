#include <stdio.h>

int somaDigitos(int n);

int main(void) {
    int n;
    printf("Digite um inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Valor invalido.\n");
        return 1;
    }
    printf("Soma dos digitos = %d\n", somaDigitos(n));
    return 0;
}

int somaDigitos(int n) {
    if (n < 10) { /* Caso base: resta apenas um digito. */
        return n;
    }
    return (n % 10) + somaDigitos(n / 10); /* Passo recursivo. */
}
