#include <stdio.h>

/* Compile normalmente: gcc 24_compilacao_condicional.c -o programa
   Compile com depuracao: gcc -DDEBUG 24_compilacao_condicional.c -o programa_debug
   Sem DEBUG, as mensagens parciais nao entram no programa.
   Com DEBUG, cada iteracao mostra o valor parcial da soma. */

int somaAteN(int n);

int main(void) {
    int n;
    printf("Digite um inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Valor invalido.\n");
        return 1;
    }
    printf("Soma de 1 ate %d = %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}
