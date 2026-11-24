#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(void) {
    float preco, subtotal, total, pago, troco;
    int quantidade, opcaoPagamento;

    printf("Preco do produto: ");
    if (scanf("%f", &preco) != 1 || preco < 0.0f) return 1;
    printf("Quantidade: ");
    if (scanf("%d", &quantidade) != 1 || quantidade < 0) return 1;
    printf("Pagamento (1 - a vista com desconto; 2 - sem desconto): ");
    if (scanf("%d", &opcaoPagamento) != 1 || (opcaoPagamento != 1 && opcaoPagamento != 2)) return 1;

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);
    printf("Subtotal = R$ %.2f\nTotal a pagar = R$ %.2f\n", subtotal, total);

    printf("Valor pago: R$ ");
    if (scanf("%f", &pago) != 1 || pago < total) {
        printf("Valor pago insuficiente ou invalido.\n");
        return 1;
    }
    troco = calculaTroco(total, pago);
    printf("Troco = R$ %.2f\n", troco);
    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    return (opcaoPagamento == 1) ? valor * 0.90f : valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
