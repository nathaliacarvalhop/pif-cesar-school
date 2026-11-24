#include <stdio.h>

#define DOBRO(x) x*2
#define DOBRO_CORRIGIDO(x) ((x) * 2)

int dobro(int x);

int main(void) {
    printf("Macro original DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3) = %d\n", dobro(2+3));
    printf("Macro corrigida DOBRO_CORRIGIDO(2+3) = %d\n", DOBRO_CORRIGIDO(2+3));
    /* DOBRO(2+3) expande para 2+3*2 (8); a funcao recebe 5 e retorna 10.
       A macro corrigida protege o argumento e a expressao, produzindo 10. */
    return 0;
}

int dobro(int x) {
    return x * 2;
}
