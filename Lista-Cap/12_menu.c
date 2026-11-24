#include <stdio.h>

void exibeMenu(void);

int main(void) {
    int opcao;
    exibeMenu();
    printf("Escolha uma opcao: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    switch (opcao) {
        case 1: printf("Opcao: Cadastrar.\n"); break;
        case 2: printf("Opcao: Listar.\n"); break;
        case 3: printf("Opcao: Remover.\n"); break;
        case 0: printf("Saindo...\n"); break;
        default: printf("Opcao invalida.\n");
    }
    return 0;
}

void exibeMenu(void) {
    printf("\n1 - Cadastrar\n2 - Listar\n3 - Remover\n0 - Sair\n");
}
