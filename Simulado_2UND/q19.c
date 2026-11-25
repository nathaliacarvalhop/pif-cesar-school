#include <stdio.h>

typedef enum { VISITANTE = 1, USUARIO, ADMIN } Nivel;
typedef struct {
    char nome[100];
    Nivel nivel;
} Usuario;

int main(void) {
    Usuario usuario;
    int nivel;

    printf("Nome do usuario: ");
    scanf(" %99[^\n]", usuario.nome);
    printf("Nivel (1=Visitante, 2=Usuario, 3=Administrador): ");
    scanf("%d", &nivel);
    usuario.nivel = (Nivel) nivel;

    printf("\nUsuario: %s\nPermissoes: ", usuario.nome);
    switch (usuario.nivel) {
        case VISITANTE:
            printf("apenas leitura\n");
            break;
        case USUARIO:
            printf("leitura e escrita\n");
            break;
        case ADMIN:
            printf("leitura, escrita e gerenciamento de usuarios\n");
            break;
        default:
            printf("nivel invalido\n");
    }
    return 0;
}
