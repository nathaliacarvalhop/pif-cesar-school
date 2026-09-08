# Lista de Exercícios – Capítulo 1: Conceitos Básicos

**Disciplina:** Programação Imperativa e Funcional (PIF)  
**Semestre:** 2026.2

## Questão 01
O programa correspondente está no arquivo `exercicio01.c`. Ele declara uma variável inteira, atribui o ano letivo corrente (2026) e utiliza `%d` no `printf()`.

## Questão 02
O programa correspondente está no arquivo `exercicio02.c`. A variável é do tipo `float` e a saída usa `%.3f`, garantindo exatamente três casas decimais.

## Questão 03
O programa correspondente está no arquivo `exercicio03.c`, contendo comentários de múltiplas linhas (`/* ... */`) e de linha única (`//`).

## Questão 04
Erros identificados:
1. `#include <stdlib.h>;` possui `;` indevido após a diretiva.
2. `int Main{` está incorreto: a função deve ser `int main(void)` ou `int main()`, e seu corpo deve ser delimitado por `{}`.
3. O `printf()` está sem aspas na string.
4. A expressão usa `cout << endl`, que é sintaxe de C++, não de C.
5. Os parênteses finais não correspondem ao bloco da função; devem ser chaves.
6. A chamada correta de `printf()` precisa de uma string de formato, por exemplo `printf("Existem %d semanas no ano.\\n", 52);`.
7. `system("PAUSE")` pode ser usado em Windows, mas não é necessário para o funcionamento do programa. A versão corrigida abaixo o mantém para ficar próxima do enunciado.

A versão funcional está em `exercicio04.c`.

## Questão 05
Não está correto, sob a perspectiva do C padrão moderno. Faltam:
- a diretiva `#include <stdio.h>`, necessária para declarar `printf()`;
- a diretiva `#include <stdlib.h>`, caso `system()` seja utilizada;
- a declaração explícita do tipo de retorno da função principal, preferencialmente `int main(void)`;
- `return 0;` para indicar término normal.

A versão corrigida está em `exercicio05.c`.

## Questão 06
Erros:
1. `int a=1; b=2; c=3:`: `b` e `c` não foram declaradas.
2. Há `:` no final de `c=3:` em vez de `;`.
3. A string do `printf()` está com aspas e argumentos mal posicionados.
4. O identificador `d` aparece no `printf()`, mas não foi declarado.
5. Há um possível erro de digitação em `0s`; foi corrigido para `Os`/texto adequado na versão funcional.

A versão corrigida está em `exercicio06.c`.

## Questão 07
### a)
Saída: começa com uma quebra de linha, depois uma tabulação e `Bom dia! Shirley.`

### b)
Saída:
`Você já tomou café?` seguida de uma quebra de linha.

### c)
Saída:
- duas quebras de linha;
- `A solução não existe!`;
- quebra de linha;
- `Não insista.`

### d)
Saída em uma mesma linha:
`Duas` + tabulação + `linhas` + tabulação + `de` + tabulação + `saída`
e, após `saída`, uma quebra de linha. Depois:
`ou` + tabulação + `uma?`

### e)
Três linhas:
```text
um
dois
três
```

## Questão 08
As sequências `\n`, `\t` e `\"` representam, respectivamente, quebra de linha, tabulação e aspas duplas. Assim, antes de `Primeiro programa` ocorre uma quebra de linha e uma tabulação; o texto é exibido entre aspas:
```text
	"Primeiro programa"
```
A execução também chama `system("PAUSE")` no Windows, que normalmente exibe uma mensagem de pausa do sistema.

## Questão 09
A primeira chamada:
```c
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
```
produz uma quebra de linha, uma tabulação, uma aspa dupla e depois `Primeiro programa`.

A segunda chamada do enunciado:
```c
printf("%c", "\"");
```
está incorreta: `%c` espera um `int` correspondente a um caractere, mas `"\""` é uma string literal. Em C, isso gera comportamento indefinido por incompatibilidade entre o especificador e o argumento. Para imprimir uma aspa como caractere, deve-se usar `'\"'`, como em `exercicio09.c`.

## Questão 10
Alternativa **b) Verdadeiro**. A linguagem C diferencia rigorosamente maiúsculas de minúsculas. Portanto, `peso`, `Peso` e `PESO` são identificadores distintos e não representam automaticamente a mesma variável.

## Questão 11

| Constante | Classificação | Tipo base em C |
|---|---|---|
| `\r` | sequência de escape | `int` em uma constante de caractere |
| `2130` | constante inteira decimal | `int` |
| `-123` | constante inteira decimal com operador unário `-` | `int` |
| `33.28` | constante de ponto flutuante | `double` |
| `0XFA` | constante inteira hexadecimal | `int` |
| `0101` | constante inteira octal | `int` |
| `2.0e30` | constante de ponto flutuante em notação científica | `double` |
| `\xDC` | sequência de escape hexadecimal | `int` em uma constante de caractere |
| `'\"'` | constante de caractere | `int` |
| `'\\'` | constante de caractere | `int` |
| `'F'` | constante de caractere | `int` |
| `0` | constante inteira decimal | `int` |
| `'\0'` | constante de caractere (escape nulo) | `int` |
| `"F"` | constante string | array de `char` (`char[2]`) |
| `-4567.89` | constante de ponto flutuante com operador unário `-` | `double` |

**Observação:** em C, uma constante de caractere como `'F'` tem tipo `int`, embora possa ser atribuída a uma variável `char`.

## Questão 12

| Instrução | Status | Justificativa |
|---|---|---|
| `int a;` | Correto | Declara `a` como inteiro. |
| `float b;` | Correto | Declara `b` como ponto flutuante de precisão simples. |
| `double float c;` | Incorreto | `double` e `float` são especificadores de tipo incompatíveis nessa combinação. |
| `unsigned char d;` | Correto | Declara um `char` sem sinal. |
| `unsigned e;` | Correto | `unsigned` sem outro tipo inteiro explícito é permitido e equivale a `unsigned int`. |
| `long float f;` | Incorreto | Para ponto flutuante, o modificador permitido é `long double`, não `long float`. |
| `long g;` | Correto | `long` sem tipo explícito equivale a `long int`. |
| `long double h;` | Correto | Declara um ponto flutuante de precisão estendida, conforme suporte da implementação. |

## Questão 13
Alternativa **c)**. Headers são arquivos de texto que normalmente contêm protótipos de funções, definições de macros, constantes, tipos e outras declarações necessárias para o código.

## Questão 14
Alternativa **a)**. A inclusão de um header disponibiliza ao código-fonte as declarações e definições necessárias antes da compilação propriamente dita.

## Questão 15
Alternativa **c)**. `#include` é uma diretiva do pré-processador C.

## Questão 16
Alternativa **c)**. As diretivas iniciadas por `#` são processadas pelo pré-processador antes da compilação propriamente dita.

## Questão 17
Estão corretas: **a), b) e c)**. Em C, espaços entre o nome da função e os parênteses, e entre tokens, podem ser usados sem alterar o significado nesse caso. A alternativa **d)** está incorreta porque a chamada de função exige os parênteses.

## Questão 18
O programa está em `exercicio18.c`. Ele usa `%.2f` para duas casas decimais e `%12.2f` para largura mínima de 12 caracteres, alinhando os valores à direita.

## Questão 19
O programa está em `exercicio19.c` e usa uma única chamada de `printf()`, com `\n` e `\t` para produzir a tabulação em cascata.

## Questão 20
O programa está em `exercicio20.c`. Ele utiliza os códigos hexadecimais fornecidos para montar uma moldura de 4 caracteres de largura por 4 linhas de altura.

## Questão 21
Há três versões independentes em `exercicio21a.c`, `exercicio21b.c` e `exercicio21c.c`:
- versão A: uma única chamada de `printf()`;
- versão B: exatamente duas chamadas de impressão;
- versão C: frases emolduradas com caracteres gráficos.

## Questão 22
O programa está em `exercicio22.c`. Ele utiliza as sequências hexadecimais indicadas (`\xDC` e `\xDF`) para compor a arte gráfica. A exibição exata dos caracteres depende da codificação/página de código do terminal; o enunciado referencia a Codepage 437.

## Questão 23
O programa está em `exercicio23.c` e desenha uma caixa vazia de 5×5 usando a letra `X`.

## Questão 24
O programa está em `exercicio24.c`. Usa especificadores de largura para alinhar as colunas `ALUNO(A)` e `NOTA`.

## Questão 25
O programa está em `exercicio25.c` e utiliza uma única instrução `printf()` para desenhar a letra C ampliada.

## Questão 26
O programa está em `exercicio26.c` e desenha o pinheiro estilizado utilizando `X`, `*`, `+` e `o`.

## Questão 27
O programa está em `exercicio27.c`. Lê segundos com `scanf()`, calcula horas, minutos e segundos restantes usando divisão inteira e operador módulo e exibe o resultado.

## Questão 28
O programa está em `exercicio28.c`. Lê três inteiros, calcula a média em `double` e exibe o resultado com exatamente duas casas decimais.
