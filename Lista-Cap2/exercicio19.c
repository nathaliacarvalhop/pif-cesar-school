#include <stdio.h>

int main() {
    int dias;
    float bruto, desconto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 30.0;
    desconto = bruto * 0.08;
    liquido = bruto - desconto;

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}
