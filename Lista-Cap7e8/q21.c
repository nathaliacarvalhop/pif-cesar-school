#include <stdio.h>

typedef struct {
    int horas, minutos, segundos;
} Tempo;

Tempo somaTempo(Tempo a, Tempo b);

int main(void) {
    Tempo a, b, resultado;

    printf("Primeiro tempo (hh mm ss): ");
    scanf("%d %d %d", &a.horas, &a.minutos, &a.segundos);
    printf("Segundo tempo (hh mm ss): ");
    scanf("%d %d %d", &b.horas, &b.minutos, &b.segundos);

    resultado = somaTempo(a, b);
    printf("Soma: %02d:%02d:%02d\n",
           resultado.horas, resultado.minutos, resultado.segundos);
    return 0;
}

Tempo somaTempo(Tempo a, Tempo b) {
    Tempo r;
    int total = a.horas * 3600 + a.minutos * 60 + a.segundos
              + b.horas * 3600 + b.minutos * 60 + b.segundos;
    r.horas = total / 3600;
    r.minutos = (total % 3600) / 60;
    r.segundos = total % 60;
    return r;
}
