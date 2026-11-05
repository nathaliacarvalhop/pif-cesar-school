#include <stdio.h>

int main(void) {
    int idade, tempo;
    printf("Digite a idade e o tempo de servico em anos: ");
    if (scanf("%d %d", &idade, &tempo) != 2) return 1;

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25))
        printf("Pode se aposentar.\n");
    else
        printf("Nao pode se aposentar.\n");

    return 0;
}
