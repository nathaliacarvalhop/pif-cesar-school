#include <stdio.h>

int main(void) {
    int opcao;
    double salario, novoSalario, imposto;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario: R$ ");
                scanf("%lf", &salario);

                if (salario <= 2000.00) {
                    novoSalario = salario * 1.15;
                } else {
                    novoSalario = salario * 1.10;
                }

                printf("Novo salario: R$ %.2f\n", novoSalario);
                break;

            case 2:
                printf("Digite o salario: R$ ");
                scanf("%lf", &salario);

                if (salario <= 3000.00) {
                    imposto = salario * 0.08;
                } else {
                    imposto = salario * 0.15;
                }

                printf("Valor do imposto: R$ %.2f\n", imposto);
                printf("Salario apos imposto: R$ %.2f\n", salario - imposto);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida! Escolha 1, 2 ou 3.\n");
        }

    } while (opcao != 3);

    return 0;
}
