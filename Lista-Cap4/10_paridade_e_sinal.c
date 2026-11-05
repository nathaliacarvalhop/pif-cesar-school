#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um numero inteiro: ");
    if (scanf("%d", &n) != 1) return 1;

    if (n % 2 == 0) printf("Par\n");
    else printf("Impar\n");

    if (n > 0) printf("Positivo\n");
    else if (n < 0) printf("Negativo\n");
    else printf("Zero\n");

    return 0;
}
