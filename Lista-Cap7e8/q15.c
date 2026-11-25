#include <stdio.h>

int meuStrlen(char s[]);
void inverte(char s[]);
void removeChar(char s[], int pos);

int main(void) {
    char texto[200];
    int pos;

    printf("Digite uma string: ");
    if (fgets(texto, sizeof(texto), stdin) == NULL) return 1;
    for (int i = 0; texto[i] != '\0'; i++)
        if (texto[i] == '\n') { texto[i] = '\0'; break; }

    printf("Tamanho: %d\n", meuStrlen(texto));
    inverte(texto);
    printf("String invertida: %s\n", texto);

    printf("Posicao a remover (0 a %d): ", meuStrlen(texto) - 1);
    scanf("%d", &pos);
    if (pos >= 0 && pos < meuStrlen(texto)) {
        removeChar(texto, pos);
        printf("Apos remocao: %s\n", texto);
    } else {
        printf("Posicao invalida.\n");
    }
    return 0;
}

int meuStrlen(char s[]) {
    int tamanho = 0;
    while (s[tamanho] != '\0') tamanho++;
    return tamanho;
}

void inverte(char s[]) {
    int i = 0, j = meuStrlen(s) - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

void removeChar(char s[], int pos) {
    int i = pos;
    while (s[i] != '\0') {
        s[i] = s[i + 1];
        i++;
    }
}
