#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, delta, x1, x2;
    printf("Digite os coeficientes a, b e c (a diferente de zero): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;

    if (a == 0) {
        printf("Erro: a deve ser diferente de zero.\n");
        return 1;
    }

    delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz unica: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
    return 0;
}
