#include <stdio.h>
#include <string.h>

int main(void) {
    const char senhaCorreta[] = "c@esar2026";
    char senha[100];
    int tentativas = 0, liberado = 0;

    while (tentativas < 3 && !liberado) {
        printf("Digite a senha: ");
        scanf("%99s", senha);

        if (strlen(senha) < 6) {
            printf("A senha deve ter pelo menos 6 caracteres. Tente novamente.\n");
            continue;
        }

        tentativas++;
        if (strcmp(senha, senhaCorreta) == 0) {
            liberado = 1;
        } else {
            printf("Senha incorreta. Tentativas utilizadas: %d/3\n", tentativas);
        }
    }

    if (liberado) printf("Acesso liberado\n");
    else printf("Acesso bloqueado\n");
    return 0;
}
