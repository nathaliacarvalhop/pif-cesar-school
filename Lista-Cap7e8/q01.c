#include <stdio.h>
#define TAM 10

int main(void) {
    float notas[TAM], soma = 0, maior, menor, media;
    int acima = 0;

    for (int i = 0; i < TAM; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    maior = menor = notas[0];
    media = soma / TAM;

    for (int i = 0; i < TAM; i++) {
        if (notas[i] > maior) maior = notas[i];
        if (notas[i] < menor) menor = notas[i];
        if (notas[i] > media) acima++;
    }

    printf("\nMedia da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Alunos acima da media: %d\n", acima);
    return 0;
}
