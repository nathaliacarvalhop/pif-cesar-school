#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char secreta, tentativa;
    int tentativas = 0;

    srand((unsigned int)time(NULL));
    secreta = (char)(rand() % 26 + 'a');

    do {
        printf("Digite uma letra minuscula: ");
        scanf(" %c", &tentativa);
        tentativas++;

        if (tentativa < secreta) {
            printf("A letra secreta vem depois no alfabeto.\n");
        } else if (tentativa > secreta) {
            printf("A letra secreta vem antes no alfabeto.\n");
        } else {
            printf("Parabens! Voce acertou!\n");
            printf("Total de tentativas: %d\n", tentativas);
        }
    } while (tentativa != secreta);

    return 0;
}
