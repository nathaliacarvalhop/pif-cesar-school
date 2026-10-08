#include <stdio.h>

int main(void) {
    int dias;
    double salarioBruto, gratificacao, imposto, salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    if (dias < 0) {
        printf("Numero de dias invalido.\n");
        return 0;
    }

    salarioBruto = dias * 45.00;
    gratificacao = salarioBruto * 0.05;
    imposto = salarioBruto * 0.08;
    salarioLiquido = salarioBruto + gratificacao - imposto;

    printf("\n===== HOLERITE =====\n");
    printf("Dias trabalhados: %d\n", dias);
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto de renda (8%%): R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
