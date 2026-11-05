#include <stdio.h>

int main(void) {
    int pagar, entregue, troco;
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int i;

    printf("Valor a pagar e valor entregue (inteiros): ");
    if (scanf("%d %d", &pagar, &entregue) != 2) return 1;

    if (pagar < 0 || entregue < 0) {
        printf("Valores invalidos.\n");
        return 1;
    }
    if (entregue < pagar) {
        printf("Erro: valor entregue insuficiente.\n");
        return 1;
    }

    troco = entregue - pagar;
    printf("Troco: R$ %d\n", troco);

    for (i = 0; i < 6; i++) {
        int quantidade = troco / cedulas[i];
        if (quantidade > 0)
            printf("%d cedula(s) de R$ %d\n", quantidade, cedulas[i]);
        troco %= cedulas[i];
    }

    if (troco == 1)
        printf("R$ 1 nao pode ser representado pelas cedulas informadas.\n");
    return 0;
}
