#include <stdio.h>

int main() {
    float comprimento, largura, preco;
    float perimetro, metros_arame, custo;

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &largura);

    printf("Digite o preco por metro de arame: ");
    scanf("%f", &preco);

    perimetro = 2 * (comprimento + largura);
    metros_arame = perimetro * 3;
    custo = metros_arame * preco;

    printf("Metros de arame: %.2f\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo);

    return 0;
}
