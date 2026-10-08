#include <stdio.h>

int main(void) {
    const int SENHA = 2026;
    int senha, tentativa;
    int acertou = 0;

    for (tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == SENHA) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativa);
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
