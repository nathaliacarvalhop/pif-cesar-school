#include <stdio.h>

typedef enum { PENDENTE, PAGO, ENTREGUE } Status;
typedef struct { int codigo; float valor; Status status; } Pedido;

const char *nomeStatus(Status s);

int main(void) {
    Pedido pedidos[6];
    int codigo, encontrado = 0, novoStatus;

    for (int i = 0; i < 6; i++) {
        printf("\nPedido %d - codigo: ", i + 1);
        scanf("%d", &pedidos[i].codigo);
        printf("Valor: ");
        scanf("%f", &pedidos[i].valor);
        printf("Status (0=PENDENTE, 1=PAGO, 2=ENTREGUE): ");
        scanf("%d", &novoStatus);
        if (novoStatus < 0 || novoStatus > 2) novoStatus = 0;
        pedidos[i].status = (Status) novoStatus;
    }

    printf("\nCodigo do pedido que deseja atualizar: ");
    scanf("%d", &codigo);
    for (int i = 0; i < 6; i++) {
        if (pedidos[i].codigo == codigo) {
            printf("Novo status (0=PENDENTE, 1=PAGO, 2=ENTREGUE): ");
            scanf("%d", &novoStatus);
            if (novoStatus >= 0 && novoStatus <= 2) {
                pedidos[i].status = (Status) novoStatus;
                encontrado = 1;
            }
            break;
        }
    }
    if (!encontrado) printf("Pedido nao encontrado ou status invalido.\n");

    for (int s = PENDENTE; s <= ENTREGUE; s++) {
        int quantidade = 0;
        float total = 0;
        for (int i = 0; i < 6; i++) {
            if (pedidos[i].status == (Status) s) {
                quantidade++;
                total += pedidos[i].valor;
            }
        }
        printf("%s: %d pedido(s), valor total R$ %.2f\n",
               nomeStatus((Status) s), quantidade, total);
    }
    return 0;
}

const char *nomeStatus(Status s) {
    switch (s) {
        case PENDENTE: return "PENDENTE";
        case PAGO: return "PAGO";
        case ENTREGUE: return "ENTREGUE";
        default: return "DESCONHECIDO";
    }
}
