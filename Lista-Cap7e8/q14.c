#include <stdio.h>
#include <string.h>

int ehPalindromo(char s[]);

int main(void) {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    if (ehPalindromo(palavra)) printf("E um palindromo.\n");
    else printf("Nao e um palindromo.\n");
    return 0;
}

int ehPalindromo(char s[]) {
    int inicio = 0, fim = (int) strlen(s) - 1;
    while (inicio < fim) {
        if (s[inicio] != s[fim]) return 0;
        inicio++;
        fim--;
    }
    return 1;
}
