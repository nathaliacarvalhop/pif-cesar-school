#include <stdio.h>

int main(void) {
    double trabalho, semestral, exame, media;
    printf("Digite as notas do trabalho, avaliacao semestral e exame final: ");
    if (scanf("%lf %lf %lf", &trabalho, &semestral, &exame) != 3) return 1;

    media = (trabalho * 2 + semestral * 3 + exame * 5) / 10.0;
    printf("Media ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Reprovado\n");
    } else if (media < 5.0) {
        printf("Em Recuperacao\n");
    } else {
        printf("Aprovado\n");
    }
    return 0;
}
