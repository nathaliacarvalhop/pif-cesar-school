#include <stdio.h>
#include "areas.h"

int main(void) {
    float raio, baseRet, alturaRet, baseTri, alturaTri;

    printf("Raio do circulo: ");
    if (scanf("%f", &raio) != 1 || raio < 0.0f) {
        printf("Raio invalido.\n");
        return 1;
    }

    printf("Base e altura do retangulo: ");
    if (scanf("%f %f", &baseRet, &alturaRet) != 2 ||
        baseRet < 0.0f || alturaRet < 0.0f) {
        printf("Dimensoes invalidas.\n");
        return 1;
    }

    printf("Base e altura do triangulo: ");
    if (scanf("%f %f", &baseTri, &alturaTri) != 2 ||
        baseTri < 0.0f || alturaTri < 0.0f) {
        printf("Dimensoes invalidas.\n");
        return 1;
    }

    printf("Area do circulo = %.2f\n", A_CIRC(raio));
    printf("Area do retangulo = %.2f\n", A_RET(baseRet, alturaRet));
    printf("Area do triangulo = %.2f\n", A_TRI(baseTri, alturaTri));
    return 0;
}
