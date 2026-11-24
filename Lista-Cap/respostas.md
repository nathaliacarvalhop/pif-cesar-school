# Lista de Exercícios – Capítulo 5: Funções
**Disciplina:** Programação Imperativa e Funcional (PIF – 2026.2)

## Parte I – Questões teóricas e analíticas

### Questão 01 – Anatomia de uma função e papel do protótipo

**a)** O protótipo é `float celsius(float);`, declarado antes da `main()`. Ele informa ao compilador que existe uma função chamada `celsius`, que recebe um `float` e devolve um `float`. A chamada é `c = celsius(f);`, dentro da `main()`, quando a função é utilizada. A definição é o bloco `float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; }`, que contém as instruções executadas pela função.

**b)** O protótipo permite que o compilador conheça antecipadamente o nome, o tipo de retorno e os tipos dos parâmetros da função. Assim, ele pode verificar se a chamada foi feita com argumentos compatíveis. Se o protótipo for omitido e a definição estiver depois da `main()`, o compilador não terá essa declaração prévia no ponto da chamada e poderá emitir um diagnóstico de função não declarada ou chamada sem declaração adequada, conforme o padrão e o compilador utilizados.

**c)** O tipo da função é `float`, pois esse é o tipo do valor devolvido por `return`. Os parâmetros indicam os dados que a função recebe; não determinam o tipo do resultado. Uma função pode, por exemplo, receber dois `int` e retornar um `float`.

### Questão 02 – O comando return e suas limitações

**a)** Uma função em C devolve um único valor diretamente por meio de `return`. Na expressão `return soma, media;`, a vírgula é o operador vírgula: a expressão `soma` é avaliada e descartada, e o valor da última expressão (`media`) é retornado. Portanto, a função não devolve os dois resultados como o programador aparentemente pretendia.

**b)** O `return;` encerra imediatamente a execução de `imprime_mensagem()` sem devolver um valor. Ele é útil para sair antecipadamente de uma função `void`, por exemplo quando ocorre uma condição de erro. Não é obrigatório no final: uma função `void` termina normalmente ao alcançar a chave `}`.

**c)** Uma implementação possível é:

```c
int calcularMedia(int a, int b, int c) {
    int soma = a + b + c;
    return soma / 3;
}

int calcularSoma(int a, int b, int c) {
    return a + b + c;
}
```

São necessárias duas funções porque cada chamada de função devolve apenas um valor por `return`. Separar as responsabilidades também deixa o código mais claro e reutilizável.

### Questão 03 – Funções void, parâmetros e assinaturas

**a)**
- `void exibe_mensagem(char* msg)`: recebe um parâmetro (`char*`) e não retorna valor.
- `int obter_codigo(void)`: não recebe parâmetros e retorna um inteiro.
- `void limpar_tela(void)`: não recebe parâmetros e não retorna valor.

**b)** Uma função com retorno calcula ou obtém um valor que pode ser utilizado em uma expressão ou atribuição, como `int obter_codigo(void)`. Um procedimento, representado em C por uma função `void`, executa uma ação sem devolver resultado, como exibir uma mensagem ou limpar a tela.

**c)** Não. `limpar_tela()` tem tipo de retorno `void`, portanto não fornece um valor que possa ser atribuído a `x`. A chamada válida é simplesmente `limpar_tela();`.

### Questão 04 – Recursão: caso base, passo recursivo e pilha

**a)** O caso base é `n == 0`, que retorna `1`. O passo recursivo é `n * fatorial(n - 1)`. Sem o caso base, as chamadas continuariam com valores cada vez menores, sem uma condição para encerrar, podendo ocorrer estouro da pilha (stack overflow).

**b)** Rastreamento de `fatorial(4)`:

- Empilhamento: `fatorial(4)` aguarda `4 * fatorial(3)`.
- `fatorial(3)` aguarda `3 * fatorial(2)`.
- `fatorial(2)` aguarda `2 * fatorial(1)`.
- `fatorial(1)` aguarda `1 * fatorial(0)`.
- `fatorial(0)` alcança o caso base e retorna `1`.

Desempilhamento:
- `fatorial(1)` retorna `1 * 1 = 1`.
- `fatorial(2)` retorna `2 * 1 = 2`.
- `fatorial(3)` retorna `3 * 2 = 6`.
- `fatorial(4)` retorna `4 * 6 = 24`.

**c)** Cada chamada cria um novo quadro de ativação na pilha de execução, contendo informações como parâmetros, variáveis locais e o ponto para onde a execução deve voltar. Quando a chamada termina, seu quadro é removido e o resultado é devolvido à chamada anterior. Sem caso base, os quadros continuam sendo empilhados até que a memória reservada à pilha se esgote, causando falha.

### Questão 05 – #define, constantes e macros com argumentos

**a)** Considerando a expansão textual das macros:
- `SQR(2+3)` expande para `((2+3)*(2+3))`, resultando em `25`.
- `DOBRO(2+3)` expande para `2+3*2`, resultando em `8`, pois a multiplicação tem precedência sobre a soma.

Assim, as saídas são `25` e `8`, respectivamente. `SQR` protege o argumento e a expressão completa com parênteses; `DOBRO` não protege o argumento.

**b)** `#define` é uma diretiva de pré-processamento, não uma instrução C comum; por isso não termina com ponto e vírgula. Por convenção, identificadores de macros e constantes são escritos em maiúsculas para diferenciá-los visualmente de variáveis e funções. Isso é uma convenção, não uma exigência da linguagem.

**c)** `#define PRN (n) printf("%d", n)` define uma macro sem parâmetros chamada `PRN`; o trecho `(n)` passa a fazer parte do texto de substituição, em vez de ser uma lista de parâmetros. A forma correta é `#define PRN(n) printf("%d", (n))`. Uma macro realiza substituição textual pelo pré-processador, enquanto uma função comum possui parâmetros tipados e seus argumentos são avaliados ao ocorrer a chamada.

### Questão 06 – #include, #undef e compilação condicional

**a)** `#include <stdio.h>` é usado normalmente para incluir cabeçalhos das bibliotecas padrão, pesquisados nos diretórios próprios do compilador. `#include "areas.h"` é usado normalmente para incluir um cabeçalho do próprio projeto, cuja busca costuma começar no diretório do arquivo-fonte e depois pode consultar os diretórios configurados.

**b)** `#undef SOMA` cancela a definição anterior da macro `SOMA`. A diretiva recebe o nome do identificador, sem a lista de parâmetros; portanto `#undef SOMA(x,y)` está incorreta.

**c)** Se `DEBUG` não estiver definido, será selecionado o trecho do `#else`, imprimindo `Modo normal`. A decisão é tomada durante o pré-processamento, antes da compilação propriamente dita. As diretivas controlam quais trechos de código permanecem no fonte pré-processado; as próprias diretivas não são instruções executadas e não aparecem como comandos no executável final.

