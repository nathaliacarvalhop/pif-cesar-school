#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, p, area;

    printf("Digite o lado a: ");
    scanf("%lf", &a);

    printf("Digite o lado b: ");
    scanf("%lf", &b);

    printf("Digite o lado c: ");
    scanf("%lf", &c);

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("Os valores informados nao formam um triangulo valido.\n");
        return 0;
    }

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semiperimetro: %.3f\n", p);
    printf("Area do triangulo: %.3f\n", area);

    return 0;
}
