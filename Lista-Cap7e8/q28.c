#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 10
#define TAM_TEXTO 100

typedef struct {
    char titulo[TAM_TEXTO];
    char autor[TAM_TEXTO];
    int ano;
    int disponivel;
} Livro;

void cadastrarLivro(Livro livros[], int *quantidade);
void listarLivros(Livro livros[], int quantidade);
int buscarLivro(Livro livros[], int quantidade, char titulo[]);
void emprestarLivro(Livro livros[], int quantidade);
void devolverLivro(Livro livros[], int quantidade);

int main(void) {
    Livro livros[MAX_LIVROS];
    int quantidade = 0, opcao;

    do {
        printf("\n===== MINI BIBLIOTECA =====\n");
        printf("1 - Cadastrar livro\n");
        printf("2 - Listar todos\n");
        printf("3 - Buscar por titulo\n");
        printf("4 - Emprestar livro\n");
        printf("5 - Devolver livro\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarLivro(livros, &quantidade); break;
            case 2: listarLivros(livros, quantidade); break;
            case 3: {
                char titulo[TAM_TEXTO];
                printf("Titulo para buscar: ");
                scanf(" %99[^\n]", titulo);
                int pos = buscarLivro(livros, quantidade, titulo);
                if (pos == -1) printf("Livro nao encontrado.\n");
                else printf("Encontrado: %s | %s | %d | %s\n",
                            livros[pos].titulo, livros[pos].autor, livros[pos].ano,
                            livros[pos].disponivel ? "Disponivel" : "Emprestado");
                break;
            }
            case 4: emprestarLivro(livros, quantidade); break;
            case 5: devolverLivro(livros, quantidade); break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}

void cadastrarLivro(Livro livros[], int *quantidade) {
    if (*quantidade >= MAX_LIVROS) {
        printf("Limite de 10 livros atingido.\n");
        return;
    }
    printf("Titulo: ");
    scanf(" %99[^\n]", livros[*quantidade].titulo);
    printf("Autor: ");
    scanf(" %99[^\n]", livros[*quantidade].autor);
    printf("Ano: ");
    scanf("%d", &livros[*quantidade].ano);
    livros[*quantidade].disponivel = 1;
    (*quantidade)++;
    printf("Livro cadastrado.\n");
}

void listarLivros(Livro livros[], int quantidade) {
    if (quantidade == 0) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }
    for (int i = 0; i < quantidade; i++)
        printf("%d. %s | %s | %d | %s\n", i + 1,
               livros[i].titulo, livros[i].autor, livros[i].ano,
               livros[i].disponivel ? "Disponivel" : "Emprestado");
}

int buscarLivro(Livro livros[], int quantidade, char titulo[]) {
    for (int i = 0; i < quantidade; i++)
        if (strcmp(livros[i].titulo, titulo) == 0) return i;
    return -1;
}

void emprestarLivro(Livro livros[], int quantidade) {
    char titulo[TAM_TEXTO];
    printf("Titulo do livro para emprestar: ");
    scanf(" %99[^\n]", titulo);
    int pos = buscarLivro(livros, quantidade, titulo);
    if (pos == -1) printf("Livro nao encontrado.\n");
    else if (!livros[pos].disponivel) printf("Livro ja esta emprestado.\n");
    else {
        livros[pos].disponivel = 0;
        printf("Emprestimo registrado.\n");
    }
}

void devolverLivro(Livro livros[], int quantidade) {
    char titulo[TAM_TEXTO];
    printf("Titulo do livro para devolver: ");
    scanf(" %99[^\n]", titulo);
    int pos = buscarLivro(livros, quantidade, titulo);
    if (pos == -1) printf("Livro nao encontrado.\n");
    else if (livros[pos].disponivel) printf("O livro ja consta como disponivel.\n");
    else {
        livros[pos].disponivel = 1;
        printf("Devolucao registrada.\n");
    }
}
