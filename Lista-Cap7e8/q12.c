#include <stdio.h>

void imprimirTabuleiro(char tab[3][3]);
int verificarVencedor(char tab[3][3], char jogador);

int main(void) {
    char tab[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char jogador = 'X';
    int linha, coluna, jogadas = 0;

    while (jogadas < 9) {
        imprimirTabuleiro(tab);
        printf("Jogador %c, informe linha e coluna (0 a 2): ", jogador);
        if (scanf("%d %d", &linha, &coluna) != 2) {
            printf("Entrada invalida.\n");
            return 1;
        }

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 ||
            tab[linha][coluna] != ' ') {
            printf("Posicao invalida ou ocupada. Tente novamente.\n");
            continue;
        }

        tab[linha][coluna] = jogador;
        jogadas++;

        if (verificarVencedor(tab, jogador)) {
            imprimirTabuleiro(tab);
            printf("Jogador %c venceu!\n", jogador);
            return 0;
        }
        jogador = (jogador == 'X') ? 'O' : 'X';
    }

    imprimirTabuleiro(tab);
    printf("Empate!\n");
    return 0;
}

void imprimirTabuleiro(char tab[3][3]) {
    printf("\n %c | %c | %c\n---+---+---\n %c | %c | %c\n---+---+---\n %c | %c | %c\n\n",
           tab[0][0], tab[0][1], tab[0][2],
           tab[1][0], tab[1][1], tab[1][2],
           tab[2][0], tab[2][1], tab[2][2]);
}

int verificarVencedor(char tab[3][3], char jogador) {
    for (int i = 0; i < 3; i++) {
        if (tab[i][0] == jogador && tab[i][1] == jogador && tab[i][2] == jogador) return 1;
        if (tab[0][i] == jogador && tab[1][i] == jogador && tab[2][i] == jogador) return 1;
    }
    if (tab[0][0] == jogador && tab[1][1] == jogador && tab[2][2] == jogador) return 1;
    if (tab[0][2] == jogador && tab[1][1] == jogador && tab[2][0] == jogador) return 1;
    return 0;
}
