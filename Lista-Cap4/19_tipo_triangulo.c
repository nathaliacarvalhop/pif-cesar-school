#include <stdio.h>

int main(void) {
    double a, b, c;
    printf("Digite os tres lados: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;

    if (a <= 0 || b <= 0 || c <= 0 ||
        !(a < b + c && b < a + c && c < a + b)) {
        printf("Erro: Os lados fornecidos nao formam um triangulo!\n");
    } else if (a == b && b == c) {
        printf("Triangulo equilatero.\n");
    } else if (a == b || a == c || b == c) {
        printf("Triangulo isosceles.\n");
    } else {
        printf("Triangulo escaleno.\n");
    }
    return 0;
}
