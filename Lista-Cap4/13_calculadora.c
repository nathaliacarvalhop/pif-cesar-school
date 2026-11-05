#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, resultado;
    char op;

    printf("Operacao (+, -, *, /, ^): ");
    if (scanf(" %c", &op) != 1) return 1;
    printf("Digite os dois operandos: ");
    if (scanf("%lf %lf", &a, &b) != 2) return 1;

    switch (op) {
        case '+': resultado = a + b; break;
        case '-': resultado = a - b; break;
        case '*': resultado = a * b; break;
        case '/':
            if (b == 0) {
                printf("Erro: divisao por zero.\n");
                return 1;
            }
            resultado = a / b;
            break;
        case '^': resultado = pow(a, b); break;
        default:
            printf("Operacao invalida.\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
