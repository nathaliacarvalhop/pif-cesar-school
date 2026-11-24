#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
    int a, b, num, den;
    printf("Digite dois inteiros positivos para calcular o MDC: ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
        printf("Valores invalidos.\n");
        return 1;
    }
    printf("MDC = %d\n", mdc(a, b));

    printf("Digite numerador e denominador positivos para simplificar: ");
    if (scanf("%d %d", &num, &den) != 2 || num <= 0 || den <= 0) {
        printf("Fracao invalida.\n");
        return 1;
    }
    simplifica(num, den);
    return 0;
}

int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);
    printf("Fracao simplificada: %d/%d\n", num / divisor, den / divisor);
}
