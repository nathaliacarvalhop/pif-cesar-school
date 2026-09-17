#include <stdio.h>

int main() {
    float graus, radianos;
    const float PI = 3.141593;

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0);

    printf("Angulo em radianos: %.6f\n", radianos);

    return 0;
}
