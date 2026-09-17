#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letra);

    letra = letra + ('a' - 'A');

    printf("Letra minuscula: %c\n", letra);

    return 0;
}
