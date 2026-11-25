#include <stdio.h>

typedef struct { float x, y; } Ponto;
typedef struct { Ponto inf_esq; Ponto sup_dir; } Retangulo;

float area(Retangulo r);
float perimetro(Retangulo r);
int contemPonto(Retangulo r, Ponto p);

int main(void) {
    Retangulo r1, r2;
    Ponto p;

    printf("Vertice inferior esquerdo (x y): ");
    scanf("%f %f", &r1.inf_esq.x, &r1.inf_esq.y);
    printf("Vertice superior direito (x y): ");
    scanf("%f %f", &r1.sup_dir.x, &r1.sup_dir.y);
    printf("Ponto para testar (x y): ");
    scanf("%f %f", &p.x, &p.y);

    r2 = r1;
    printf("Area: %.2f\n", area(r1));
    printf("Perimetro: %.2f\n", perimetro(r1));
    printf("Ponto %s do retangulo.\n", contemPonto(r1, p) ? "esta dentro" : "nao esta dentro");
    printf("Copia realizada: r2 = r1 (area de r2: %.2f)\n", area(r2));
    return 0;
}

float area(Retangulo r) {
    return (r.sup_dir.x - r.inf_esq.x) * (r.sup_dir.y - r.inf_esq.y);
}

float perimetro(Retangulo r) {
    float largura = r.sup_dir.x - r.inf_esq.x;
    float altura = r.sup_dir.y - r.inf_esq.y;
    return 2 * (largura + altura);
}

int contemPonto(Retangulo r, Ponto p) {
    return p.x >= r.inf_esq.x && p.x <= r.sup_dir.x &&
           p.y >= r.inf_esq.y && p.y <= r.sup_dir.y;
}
