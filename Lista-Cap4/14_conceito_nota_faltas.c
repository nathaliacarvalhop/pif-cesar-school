#include <stdio.h>

int main(void) {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota (0 a 10) e a quantidade de faltas: ");
    if (scanf("%f %d", &nota, &faltas) != 2) return 1;

    if (nota < 0 || nota > 10 || faltas < 0) {
        printf("Dados invalidos.\n");
        return 1;
    }

    if (nota >= 9.0) conceito = (faltas <= 20) ? 'A' : 'B';
    else if (nota >= 7.5) conceito = (faltas <= 20) ? 'B' : 'C';
    else if (nota >= 5.0) conceito = (faltas <= 20) ? 'C' : 'D';
    else if (nota >= 4.0) conceito = (faltas <= 20) ? 'D' : 'E';
    else conceito = 'E';

    printf("Conceito: %c\n", conceito);
    return 0;
}
