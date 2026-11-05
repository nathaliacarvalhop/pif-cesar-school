#include <stdio.h>

int main(void) {
    double total, base, comissao;
    int opcao;

    printf("Digite o valor da compra: ");
    if (scanf("%lf", &total) != 1 || total < 0) return 1;
    printf("Pagamento (1 = a vista; 2 = 3x sem juros): ");
    if (scanf("%d", &opcao) != 1) return 1;

    switch (opcao) {
        case 1:
            base = total * 0.90;
            comissao = base * 0.05;
            printf("Valor com desconto: R$ %.2f\n", base);
            printf("Comissao: R$ %.2f\n", comissao);
            break;
        case 2:
            base = total;
            comissao = base * 0.05;
            printf("3 parcelas de R$ %.2f\n", total / 3.0);
            printf("Comissao: R$ %.2f\n", comissao);
            break;
        default:
            printf("Opcao invalida.\n");
    }
    return 0;
}
