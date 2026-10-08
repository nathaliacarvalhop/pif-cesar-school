#include <stdio.h>

int main(void) {
    int totalSegundos;
    int horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    if (totalSegundos < 0) {
        printf("A quantidade de segundos nao pode ser negativa.\n");
        return 0;
    }

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n",
           totalSegundos, horas, minutos, segundos);

    return 0;
}
