#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite os tres angulos inteiros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;

    if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
        printf("Angulos invalidos para um triangulo.\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triangulo retangulo.\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triangulo obtusangulo.\n");
    } else {
        printf("Triangulo acutangulo.\n");
    }
    return 0;
}
