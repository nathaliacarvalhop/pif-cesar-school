# Parte I — Questões teóricas e analíticas

## Questão 01 — Expressões condicionais e atribuição vs. igualdade

**a)** Em `if (x = 0)`, o operador `=` realiza uma atribuição: o valor zero é armazenado em `x`. O valor da própria expressão de atribuição é zero, que em C representa falso. Portanto, o bloco do `if` não é executado. Já `x == 0` compara os valores e não altera `x`.

**b)** Em C, uma condição é considerada falsa quando seu valor é igual a zero e verdadeira quando é diferente de zero. Isso vale para expressões inteiras e reais: zero é falso; qualquer valor diferente de zero é verdadeiro.

**c)** Em `if (x = -5)`, a atribuição armazena -5 em `x`. Como -5 é diferente de zero, a condição é verdadeira e o bloco associado ao `if` será executado.

## Questão 02 — Associação do `else` e aninhamento

**a)** A mensagem exibida será `Opção B`. A condição `x > 10` é verdadeira, então o `if` interno é avaliado. Como `y > 10` é falsa, o `else` associado ao `if` interno é executado.

**b)** Pela regra de associação da linguagem C, um `else` sem chaves é associado ao `if` mais próximo que ainda não tenha um `else`.

**c)** Uma forma de garantir que a opção B seja impressa somente quando `x <= 10` é:

```c
if (x > 10) {
    if (y > 10) {
        printf("Opção A\\n");
    }
} else {
    printf("Opção B\\n");
}
```

## Questão 03 — Operador ternário

**a)** A expressão `(media >= 7.0) ? 'A' : 'R'` verifica se a média é maior ou igual a 7. Se for, retorna o caractere `A`; caso contrário, retorna `R`. Com `media = 6.8`, será armazenado `R` em `situacao`.

**b)** Reescrita com `if-else`:

```c
media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

**c)** Não. O operador ternário é uma expressão que seleciona um entre dois valores. Ele é adequado para decisões simples, mas não substitui diretamente blocos `if-else` que precisam executar vários comandos ou controlar fluxos mais complexos.

## Questão 04 — `switch-case` e fall-through

**a)** A saída exata será:

```text
Prata
Ouro
```

O programa entra no `case 2` e continua executando os comandos seguintes até encontrar `break`. Como não há `break` depois de `Prata`, também imprime `Ouro`.

**b)** O `break` encerra a execução do `switch` e transfere o fluxo para a instrução seguinte ao bloco. Quando ele é omitido, ocorre o *fall-through*, isto é, a execução continua nos próximos casos.

**c)** O argumento de `switch` deve ter tipo inteiro, como `char`, `short`, `int`, `long` e tipos enumerados, considerando as conversões inteiras permitidas pela linguagem. `float` e `double` não são permitidos diretamente, pois não são tipos inteiros.

## Questão 05 — Avaliação de curto-circuito

**a)** A saída será:

```text
a = 0, b = 5, c = 8
```

Como `a != 0` é falso, o operador `&&` não avalia a segunda parte. Portanto, `++b` não é executado. O `else` executa `c -= 2`, deixando `c` igual a 8.

**b)** Com `&&`, se a primeira condição for falsa, a expressão inteira já será falsa e a segunda parte não será avaliada. Com `||`, se a primeira condição for verdadeira, a expressão inteira já será verdadeira e a segunda parte não será avaliada.

**c)** Na condição `a == 0 || ++b > 5`, a primeira parte é verdadeira. Por curto-circuito, `++b` não é executado. O bloco do `if` é executado e `c += 10`, resultando em `b = 5` e `c = 20`.

## Questão 06 — Construções `else-if`

**a)** Para `idade = 65`, serão impressas as mensagens `Idoso`, `Adulto` e `Jovem`. Os três primeiros comandos `if` são independentes e suas condições são verdadeiras. O `else` está associado somente ao último `if` (`idade >= 12`), cuja condição também é verdadeira; por isso, `Criança` não será impressa.

**b)** Em uma sequência de `if` independentes, cada condição é testada separadamente e mais de um bloco pode ser executado. Em uma cadeia `if / else if / else`, somente o primeiro bloco cuja condição seja verdadeira é executado; os seguintes são ignorados.

**c)** Reescrita:

```c
if (idade >= 60) {
    printf("Idoso\\n");
} else if (idade >= 18) {
    printf("Adulto\\n");
} else if (idade >= 12) {
    printf("Jovem\\n");
} else {
    printf("Criança\\n");
}
```
