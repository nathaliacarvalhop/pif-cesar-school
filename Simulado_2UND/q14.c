#include <stdio.h>
#include <string.h>

int main(void) {
    char mensagem[300];
    int k;

    printf("Digite uma mensagem em letras maiusculas: ");
    /* gets() nao e segura e foi removida do C moderno; fgets() limita a leitura. */
    if (fgets(mensagem, sizeof(mensagem), stdin) == NULL) return 1;
    mensagem[strcspn(mensagem, "\n")] = '\0';

    printf("Deslocamento k: ");
    scanf("%d", &k);
    k = ((k % 26) + 26) % 26;

    for (int i = 0; mensagem[i] != '\0'; i++) {
        if (mensagem[i] >= 'A' && mensagem[i] <= 'Z')
            mensagem[i] = (char) ('A' + (mensagem[i] - 'A' + k) % 26);
    }

    puts(mensagem);
    return 0;
}
