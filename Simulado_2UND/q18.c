#include <stdio.h>

typedef struct {
    char nome[100];
    int codigo;
    float salario;
} Funcionario;

int main(void) {
    Funcionario funcionarios[4];
    float soma = 0, media;
    int maior = 0;

    for (int i = 0; i < 4; i++) {
        printf("\nFuncionario %d\nNome: ", i + 1);
        scanf(" %99[^\n]", funcionarios[i].nome);
        printf("Codigo: ");
        scanf("%d", &funcionarios[i].codigo);
        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);

        soma += funcionarios[i].salario;
        if (i == 0 || funcionarios[i].salario > funcionarios[maior].salario)
            maior = i;
    }

    media = soma / 4.0f;
    printf("\nFuncionario com maior salario: %s (codigo %d), R$ %.2f\n",
           funcionarios[maior].nome, funcionarios[maior].codigo,
           funcionarios[maior].salario);
    printf("Media salarial: R$ %.2f\n", media);

    printf("\nSalarios reajustados em 10%% para quem recebe abaixo da media:\n");
    for (int i = 0; i < 4; i++) {
        if (funcionarios[i].salario < media)
            printf("%s: R$ %.2f\n", funcionarios[i].nome,
                   funcionarios[i].salario * 1.10f);
    }
    return 0;
}
