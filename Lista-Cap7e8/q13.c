#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char frase[300];
    int vogais = 0, consoantes = 0, espacos = 0;

    printf("Digite uma frase: ");
    /* gets() foi removida do C moderno por ser insegura; fgets() e a alternativa segura. */
    if (fgets(frase, sizeof(frase), stdin) == NULL) return 1;
    frase[strcspn(frase, "\n")] = '\0';

    for (size_t i = 0; i < strlen(frase); i++) {
        unsigned char c = (unsigned char) frase[i];
        c = (unsigned char) tolower(c);

        if (c == ' ') espacos++;
        else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vogais++;
        else if ((c >= 'a' && c <= 'z')) consoantes++;
    }

    printf("Vogais: %d\nConsoantes: %d\nEspacos: %d\n", vogais, consoantes, espacos);
    return 0;
}
