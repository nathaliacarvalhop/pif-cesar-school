#include <stdio.h>

int main(void) {
    int idade;
    float renda, solicitado;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Renda mensal: ");
    scanf("%f", &renda);
    printf("Valor solicitado: ");
    scanf("%f", &solicitado);

    if (idade >= 18 && idade <= 70 && renda >= 2000.0f) {
        if (solicitado <= 10.0f * renda)
            printf("Empréstimo aprovado!\n");
        else
            printf("Valor acima do limite permitido.\n");
    } else {
        printf("Empréstimo negado.\n");
    }
    return 0;
}
