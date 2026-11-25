#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[60], sobrenome[60], completo[125];

    printf("Primeiro nome: ");
    scanf("%59s", nome);
    printf("Sobrenome: ");
    scanf("%59s", sobrenome);

    strcpy(completo, sobrenome);
    strcat(completo, ", ");
    strcat(completo, nome);

    puts(completo);
    printf("Quantidade de caracteres: %zu\n", strlen(completo));
    return 0;
}
