#include <stdio.h>
#define TAM 10

int main(void) {
    float temperaturas[TAM], soma = 0, media, maior;
    int posMaior = 0, acima = 0;

    for (int i = 0; i < TAM; i++) {
        printf("Temperatura maxima do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    media = soma / TAM;
    maior = temperaturas[0];

    for (int i = 0; i < TAM; i++) {
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
            posMaior = i;
        }
        if (temperaturas[i] > media) acima++;
    }

    printf("Temperatura media: %.2f\n", media);
    printf("Maior temperatura: %.2f (posicao %d, dia %d)\n",
           maior, posMaior, posMaior + 1);
    printf("Dias acima da media: %d\n", acima);
    return 0;
}
