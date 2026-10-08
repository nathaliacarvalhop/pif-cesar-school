#include <stdio.h>

int main(void) {
    double nota, soma = 0.0, maior = 0.0, menor = 0.0, media;
    int total = 0;

    while (1) {
        printf("Digite a nota (0.0 a 10.0) ou -1.0 para encerrar: ");
        scanf("%lf", &nota);

        if (nota == -1.0) {
            break;
        }

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida. Digite de 0.0 a 10.0 ou -1.0 para sair.\n");
            continue;
        }

        if (total == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
        }

        soma += nota;
        total++;
    }

    if (total == 0) {
        printf("\nNenhum aluno foi avaliado.\n");
    } else {
        media = soma / total;

        printf("\nTotal de alunos avaliados: %d\n", total);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", media);
    }

    return 0;
}
