#include <stdio.h>

int main(void) {
    float distancia, litros, consumo;
    printf("Digite a distancia (km) e os litros consumidos: ");
    if (scanf("%f %f", &distancia, &litros) != 2) return 1;

    if (distancia < 0 || litros <= 0) {
        printf("Valores invalidos.\n");
        return 1;
    }

    consumo = distancia / litros;
    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0) printf("Venda o carro!\n");
    else if (consumo <= 14.0) printf("Economico!\n");
    else printf("Super economico!\n");

    return 0;
}
