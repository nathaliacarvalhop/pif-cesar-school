#include <stdio.h>

typedef struct {
    char nome[60];
    float peso;
    float calorias;
} Dieta;

int main(void) {
    Dieta alimentos[5];
    float total = 0;
    int maisCalorico = 0;

    for (int i = 0; i < 5; i++) {
        printf("\nAlimento %d\nNome: ", i + 1);
        scanf(" %59[^\n]", alimentos[i].nome);
        printf("Peso da porcao (g): ");
        scanf("%f", &alimentos[i].peso);
        printf("Calorias: ");
        scanf("%f", &alimentos[i].calorias);
        total += alimentos[i].calorias;
        if (alimentos[i].calorias > alimentos[maisCalorico].calorias || i == 0)
            maisCalorico = i;
    }

    printf("\nLista de alimentos:\n");
    for (int i = 0; i < 5; i++)
        printf("%s - %.2f g - %.2f kcal\n",
               alimentos[i].nome, alimentos[i].peso, alimentos[i].calorias);

    printf("Total de calorias: %.2f kcal\n", total);
    printf("Alimento mais calorico: %s (%.2f kcal)\n",
           alimentos[maisCalorico].nome, alimentos[maisCalorico].calorias);
    return 0;
}
