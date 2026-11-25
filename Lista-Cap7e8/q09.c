#include <stdio.h>

void lerNotas(float m[][4], int alunos);
float mediaAluno(float m[][4], int aluno);
float mediaProva(float m[][4], int alunos, int prova);

int main(void) {
    float notas[5][4];

    lerNotas(notas, 5);

    printf("\nMedia por aluno:\n");
    for (int i = 0; i < 5; i++)
        printf("Aluno %d: %.2f\n", i + 1, mediaAluno(notas, i));

    printf("\nMedia por prova:\n");
    for (int j = 0; j < 4; j++)
        printf("Prova %d: %.2f\n", j + 1, mediaProva(notas, 5, j));

    return 0;
}

void lerNotas(float m[][4], int alunos) {
    for (int i = 0; i < alunos; i++)
        for (int j = 0; j < 4; j++) {
            printf("Nota do aluno %d na prova %d: ", i + 1, j + 1);
            scanf("%f", &m[i][j]);
        }
}

float mediaAluno(float m[][4], int aluno) {
    float soma = 0;
    for (int j = 0; j < 4; j++) soma += m[aluno][j];
    return soma / 4;
}

float mediaProva(float m[][4], int alunos, int prova) {
    float soma = 0;
    for (int i = 0; i < alunos; i++) soma += m[i][prova];
    return soma / alunos;
}
