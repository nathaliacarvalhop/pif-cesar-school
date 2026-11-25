#include <stdio.h>

int main(void) {
    int vendas[4][3];
    int totalProdutos[3] = {0, 0, 0};
    int maiorProduto = 0;

    for (int loja = 0; loja < 4; loja++) {
        printf("\nLoja %d:\n", loja + 1);
        for (int produto = 0; produto < 3; produto++) {
            printf("Quantidade do produto %d: ", produto + 1);
            scanf("%d", &vendas[loja][produto]);
            totalProdutos[produto] += vendas[loja][produto];
        }
    }

    printf("\nTotal vendido por loja:\n");
    for (int loja = 0; loja < 4; loja++) {
        int totalLoja = 0;
        for (int produto = 0; produto < 3; produto++)
            totalLoja += vendas[loja][produto];
        printf("Loja %d: %d unidades\n", loja + 1, totalLoja);
    }

    for (int produto = 1; produto < 3; produto++)
        if (totalProdutos[produto] > totalProdutos[maiorProduto])
            maiorProduto = produto;

    printf("\nProduto com maior venda na rede: Produto %d (%d unidades)\n",
           maiorProduto + 1, totalProdutos[maiorProduto]);
    return 0;
}
