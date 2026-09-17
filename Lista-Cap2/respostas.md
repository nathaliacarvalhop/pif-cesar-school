# Lista de Exercícios – Capítulo 2: Operadores
## Programação Imperativa e Funcional (PIF) – 2026.2

### Questão 01 – Truncamento de Tipos e Coerção Implícita

**a)** O valor exibido será:

`2`

**b)** Isso acontece porque `valor_inteiro` é uma variável do tipo `int`, mas recebe o valor `2.97`, que é um número real. Ao armazenar esse valor em um `int`, a parte decimal é descartada. Esse fenômeno é chamado de **conversão de tipos** ou **coerção implícita**, causando truncamento.

**c)** Para manter a precisão, podemos usar uma variável do tipo `float` ou `double`. Se for necessário arredondar, podemos usar uma função matemática, como `round()`, da biblioteca `<math.h>`. Também podemos fazer uma conversão explícita (cast), por exemplo:

`int valor = (int)2.97;`

Nesse caso, o valor também será 2, pois o cast para `int` apenas descarta a parte decimal.

---

### Questão 02 – Entrada Standard de Caracteres vs. Bibliotecas Legadas

**a)** A biblioteca `<conio.h>` não faz parte do padrão ANSI C. Funções como `getch()` e `getche()` podem existir em alguns compiladores, mas não são portáveis para sistemas modernos como Linux e macOS.

**b)** A biblioteca padrão `<stdio.h>` possui funções como `getchar()` para entrada de um caractere e `putchar()` para exibir um caractere.

**c)** Um exemplo simples e portátil:

```c
#include <stdio.h>

int main() {
    int caractere;

    do {
        caractere = getchar();
    } while (caractere == '\n');

    printf("Caractere: %c\n", caractere);

    return 0;
}
```

O `do...while` faz com que eventuais quebras de linha sejam ignoradas.

---

### Questão 03 – Formatação de Saída em Bases Numéricas e ASCII

```c
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);

    return 0;
}
```

Os especificadores usados são `%d` para decimal, `%x` para hexadecimal em caixa baixa, `%o` para octal e `%c` para o caractere correspondente.

---

### Questão 04 – Operadores de Atribuição Composta e Precedência

Valores iniciais:

`a = 1, b = 2, c = 3, d = 4`

**1.** `a += b + c`

Primeiro:

`b + c = 2 + 3 = 5`

Então:

`a = 1 + 5 = 6`

Agora: `a = 6, b = 2, c = 3, d = 4`

**2.** `b *= c = d + 2`

Primeiro:

`d + 2 = 4 + 2 = 6`

Então:

`c = 6`

Depois:

`b = 2 * 6 = 12`

Agora: `a = 6, b = 12, c = 6, d = 4`

**3.** `d %= a + a + a`

Primeiro:

`a + a + a = 6 + 6 + 6 = 18`

Então:

`d = 4 % 18 = 4`

Agora: `d = 4`

**4.** `d -= c -= b -= a`

A expressão é avaliada da direita para a esquerda.

Primeiro:

`b -= a` → `b = 12 - 6 = 6`

Depois:

`c -= b` → `c = 6 - 6 = 0`

Por fim:

`d -= c` → `d = 4 - 0 = 4`

Agora: `a = 6, b = 6, c = 0, d = 4`

**5.** `a += b += c += 7`

Primeiro:

`c += 7` → `c = 0 + 7 = 7`

Depois:

`b += c` → `b = 6 + 7 = 13`

Por fim:

`a += b` → `a = 6 + 13 = 19`

**Valores finais:**

`a = 19, b = 13, c = 7, d = 4`

---

### Questão 05 – Avaliação de Expressões Lógicas e Relacionais

Valores:

`i = 1, j = 2, k = 3, n = 2`

`x = 3.3, y = 4.4`

**a)** `i < j + 3`

`1 < 5` → **1 (verdadeiro)**

**b)** `2 * i - 7 <= j - 8`

`2 - 7 <= 2 - 8`

`-5 <= -6` → **0 (falso)**

**c)** `-x + y >= 2.0 * y`

`-3.3 + 4.4 >= 8.8`

`1.1 >= 8.8` → **0 (falso)**

**d)** `x == y`

`3.3 == 4.4` → **0 (falso)**

**e)** `!(n - j)`

`n - j = 2 - 2 = 0`

`!0 = 1` → **1 (verdadeiro)**

**f)** `!n - j`

O `!` tem prioridade:

`!2 = 0`

`0 - 2 = -2`

Como expressão lógica, valor diferente de zero é verdadeiro. Portanto, **1 (verdadeiro)**.

**g)** `i && j && k`

Todos são diferentes de zero:

`1 && 1 && 1` → **1 (verdadeiro)**

**h)** `i || j - 3 && k`

Primeiro:

`j - 3 = -1`

Como `-1` é verdadeiro:

`1 || 1 && 1` → **1 (verdadeiro)**

**i)** `i < j && 2 >= k`

`1 < 2` é verdadeiro.

`2 >= 3` é falso.

`1 && 0` → **0 (falso)**

**j)** `i == 2 || j == 4 || k == 5`

Todas as comparações são falsas.

`0 || 0 || 0` → **0 (falso)**

---

### Questão 06 – Comportamento e Precedência dos Incrementos

**a)** No Trecho A:

```c
int n = 5;
int x = ++n;
```

O `++n` é prefixado. Primeiro `n` é incrementado e depois seu valor é usado.

`n = 6`

`x = 6`

Saída:

`Trecho A: n = 6, x = 6`

No Trecho B:

```c
int m = 5;
int y = m++;
```

O `m++` é pós-fixado. Primeiro o valor atual é usado e depois `m` é incrementado.

`y = 5`

`m = 6`

Saída:

`Trecho B: m = 6, y = 5`

**b)** A expressão:

```c
printf("%d\t%d\t%d\n", n, n+1, n++);
```

não deve ser usada porque a variável `n` é lida e modificada na mesma chamada de `printf()`, sem uma ordem de avaliação garantida entre os argumentos. Isso pode gerar comportamento indefinido e resultados diferentes dependendo do compilador.

---

## Questões Práticas

Os arquivos `exercicio07.c` até `exercicio28.c` estão nesta mesma pasta e correspondem individualmente às questões de código da lista.
