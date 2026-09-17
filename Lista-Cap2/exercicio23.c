#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    int duracao;
    int total_segundos;
    int hora_final, minuto_final, segundo_final;

    printf("Digite a hora de inicio: ");
    scanf("%d", &horas);

    printf("Digite os minutos de inicio: ");
    scanf("%d", &minutos);

    printf("Digite os segundos de inicio: ");
    scanf("%d", &segundos);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    total_segundos = horas * 3600 + minutos * 60 + segundos;
    total_segundos += duracao;

    total_segundos = total_segundos % (24 * 3600);

    hora_final = total_segundos / 3600;
    minuto_final = (total_segundos % 3600) / 60;
    segundo_final = total_segundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n",
           hora_final, minuto_final, segundo_final);

    return 0;
}
