#include <stdio.h>

int main(void) {
    double salario, percentual, aumento;
    int cargo;

    printf("Digite o salario atual: ");
    if (scanf("%lf", &salario) != 1 || salario < 0) return 1;
    printf("Cargo (1 = Tecnico, 2 = Gerente, 3 = Demais): ");
    if (scanf("%d", &cargo) != 1) return 1;

    switch (cargo) {
        case 1: percentual = (salario <= 3000) ? 0.15 : 0.10; break;
        case 2: percentual = (salario <= 5000) ? 0.10 : 0.05; break;
        case 3: percentual = 0.08; break;
        default:
            printf("Codigo de cargo invalido.\n");
            return 1;
    }

    aumento = salario * percentual;
    printf("Aumento: R$ %.2f\nNovo salario: R$ %.2f\n",
           aumento, salario + aumento);
    return 0;
}
