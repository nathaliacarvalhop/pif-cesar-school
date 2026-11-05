#include <stdio.h>
#include <math.h>

int main(void) {
    double x;
    printf("Digite um numero real: ");
    if (scanf("%lf", &x) != 1) return 1;

    if (x >= 0) {
        printf("Raiz quadrada: %.2f\n", sqrt(x));
    } else {
        printf("Quadrado: %.2f\n", x * x);
    }
    return 0;
}
