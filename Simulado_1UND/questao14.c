#include <stdio.h>

int main(void) {
    const int SENHA = 2026;
    int senha;
    int tentativas = 0;
    int acertou = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++;

        if (senha == SENHA) {
            printf("Acesso Concedido!\n");
            acertou = 1;
            break;
        }

        printf("Senha incorreta.\n");
    }

    if (!acertou) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}
