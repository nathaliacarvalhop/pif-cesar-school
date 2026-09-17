#include <stdio.h>

int main() {
    float lado, base, altura;
    float area_quadrado, area_retangulo, area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    area_quadrado = lado * lado;
    area_retangulo = base * altura;
    area_triangulo = (base * altura) / 2.0;

    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo retangulo: %.2f\n", area_triangulo);

    return 0;
}
