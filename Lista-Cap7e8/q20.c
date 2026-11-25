#include <stdio.h>

typedef struct {
    char nome[100];
    int matricula;
    float nota1, nota2;
} Aluno;

int main(void) {
    Aluno aluno;
    float media;

    printf("Nome: ");
    scanf(" %99[^\n]", aluno.nome);
    printf("Matricula: ");
    scanf("%d", &aluno.matricula);
    printf("Primeira nota: ");
    scanf("%f", &aluno.nota1);
    printf("Segunda nota: ");
    scanf("%f", &aluno.nota2);

    media = (aluno.nota1 + aluno.nota2) / 2;
    printf("\nAluno: %s\nMatricula: %d\nMedia: %.2f\n",
           aluno.nome, aluno.matricula, media);

    if (media >= 7) printf("Aprovado\n");
    else if (media >= 4) printf("Final\n");
    else printf("Reprovado\n");
    return 0;
}
