#include <stdio.h>

typedef struct {
    int hora;
    int minuto;
} Horario;

int duracao(Horario ini, Horario fim);

int main(void) {
    Horario inicio, fim;
    int minutos;

    printf("Horario de inicio (hora minuto): ");
    scanf("%d %d", &inicio.hora, &inicio.minuto);
    printf("Horario de fim (hora minuto): ");
    scanf("%d %d", &fim.hora, &fim.minuto);

    if (inicio.hora < 0 || inicio.hora > 23 ||
        fim.hora < 0 || fim.hora > 23 ||
        inicio.minuto < 0 || inicio.minuto > 59 ||
        fim.minuto < 0 || fim.minuto > 59) {
        printf("Horario invalido.\n");
        return 1;
    }

    minutos = duracao(inicio, fim);
    if (minutos < 0) {
        printf("O horario final deve ser posterior ao inicial.\n");
        return 1;
    }

    printf("Duracao: %d minutos\n", minutos);
    printf("Formato: %dh%02dmin\n", minutos / 60, minutos % 60);
    return 0;
}

int duracao(Horario ini, Horario fim) {
    return (fim.hora * 60 + fim.minuto) -
           (ini.hora * 60 + ini.minuto);
}
