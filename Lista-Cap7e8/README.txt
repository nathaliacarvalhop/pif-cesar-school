LISTA DE EXERCICIOS - CAPITULOS 7 E 8 (PIF)

Conteudo:
- q01.c a q28.c: uma solucao independente para cada questao do enunciado.
- Os programas foram escritos em C99 e podem ser compilados individualmente.

Como compilar (GCC):
    gcc -std=c99 -Wall -Wextra q01.c -o q01

Como executar:
    ./q01

No Windows com MinGW:
    gcc -std=c99 -Wall -Wextra q01.c -o q01.exe
    q01.exe

Observacoes:
- A questao 13 pede gets(), mas essa funcao foi removida do C moderno por ser insegura.
  Foi usado fgets(), que permite ler a frase com limite de tamanho.
- A questao 23 considera que, se o horario de saida for menor que o de entrada,
  a saida ocorreu no dia seguinte.
- As questoes 12 e 28 sao implementacoes interativas via menu/terminal.

Revise, compile e teste os arquivos no ambiente da disciplina antes de enviar.
