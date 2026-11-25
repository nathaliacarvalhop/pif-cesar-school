#include <stdio.h>

typedef struct { int hora, minuto; } Hora;
typedef struct { char placa[20]; Hora entrada, saida; } Veiculo;

int calcularMinutos(Hora entrada, Hora saida);

int main(void) {
    Veiculo v;
    int minutos, horasCobradas;
    float valor;

    printf("Placa: ");
    scanf("%19s", v.placa);
    printf("Horario de entrada (hora minuto): ");
    scanf("%d %d", &v.entrada.hora, &v.entrada.minuto);
    printf("Horario de saida (hora minuto): ");
    scanf("%d %d", &v.saida.hora, &v.saida.minuto);

    if (v.entrada.hora < 0 || v.entrada.hora > 23 ||
        v.saida.hora < 0 || v.saida.hora > 23 ||
        v.entrada.minuto < 0 || v.entrada.minuto > 59 ||
        v.saida.minuto < 0 || v.saida.minuto > 59) {
        printf("Horario invalido.\n");
        return 1;
    }

    minutos = calcularMinutos(v.entrada, v.saida);
    horasCobradas = (minutos + 59) / 60;
    valor = horasCobradas * 5.0f;

    printf("Veiculo: %s\nPermanencia: %d minutos\n", v.placa, minutos);
    printf("Valor a pagar: R$ %.2f\n", valor);
    return 0;
}

int calcularMinutos(Hora entrada, Hora saida) {
    int inicio = entrada.hora * 60 + entrada.minuto;
    int fim = saida.hora * 60 + saida.minuto;
    if (fim < inicio) fim += 24 * 60; /* considera saida no dia seguinte */
    return fim - inicio;
}
