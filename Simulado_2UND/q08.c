#include <stdio.h>

int somaDigitos(int n);
long potencia(int base, int exp);

int main(void) {
    int numero, base, expoente;

    printf("Numero para somar os digitos: ");
    scanf("%d", &numero);
    printf("Base: ");
    scanf("%d", &base);
    printf("Expoente (nao negativo): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Este programa aceita expoente nao negativo.\n");
        return 1;
    }

    printf("Soma dos digitos: %d\n", somaDigitos(numero));
    printf("Potencia: %ld\n", potencia(base, expoente));
    return 0;
}

int somaDigitos(int n) {
    if (n < 0) n = -n;
    if (n < 10) return n;
    return n % 10 + somaDigitos(n / 10);
}

long potencia(int base, int exp) {
    if (exp == 0) return 1;
    return base * potencia(base, exp - 1);
}
