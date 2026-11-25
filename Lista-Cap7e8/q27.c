#include <stdio.h>

typedef enum { INTEIRO, REAL, CARACTERE } Tipo;
typedef union { int i; float f; char c; } Valor;
typedef struct { Tipo tipo; Valor valor; } Registro;

int main(void) {
    Registro registros[3];

    for (int i = 0; i < 3; i++) {
        int opcao;
        printf("\nRegistro %d - tipo (0=inteiro, 1=real, 2=caractere): ", i + 1);
        scanf("%d", &opcao);

        if (opcao == INTEIRO) {
            registros[i].tipo = INTEIRO;
            printf("Valor inteiro: ");
            scanf("%d", &registros[i].valor.i);
        } else if (opcao == REAL) {
            registros[i].tipo = REAL;
            printf("Valor real: ");
            scanf("%f", &registros[i].valor.f);
        } else if (opcao == CARACTERE) {
            registros[i].tipo = CARACTERE;
            printf("Caractere: ");
            scanf(" %c", &registros[i].valor.c);
        } else {
            printf("Tipo invalido; registro definido como inteiro zero.\n");
            registros[i].tipo = INTEIRO;
            registros[i].valor.i = 0;
        }
    }

    printf("\nRegistros:\n");
    for (int i = 0; i < 3; i++) {
        printf("Registro %d: ", i + 1);
        switch (registros[i].tipo) {
            case INTEIRO: printf("inteiro = %d\n", registros[i].valor.i); break;
            case REAL: printf("real = %.2f\n", registros[i].valor.f); break;
            case CARACTERE: printf("caractere = %c\n", registros[i].valor.c); break;
        }
    }

    /* A union reserva espaco suficiente para seu maior membro, com alinhamento adequado. */
    printf("sizeof(Valor) = %zu bytes\n", sizeof(Valor));
    return 0;
}
