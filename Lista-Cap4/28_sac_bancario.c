#include <stdio.h>

int main(void) {
    int opcao;

    printf("=== SAC Bancario ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Escolha uma opcao: ");
    if (scanf("%d", &opcao) != 1) return 1;

    switch (opcao) {
        case 1: printf("Direcionando para consulta de saldo...\n"); break;
        case 2: printf("Direcionando para emissao de extrato...\n"); break;
        case 3: printf("Direcionando para transferencia...\n"); break;
        case 4: printf("Direcionando para um atendente...\n"); break;
        default: printf("Opcao invalida.\n");
    }
    return 0;
}
