# Lista de Exercícios — Capítulo 4 (PIF / Linguagem C)

Repositório organizado conforme a orientação da lista da Cesar School.

## Estrutura

- `Lista_Capitulo_4/respostas_teoricas.md`: respostas das questões 1 a 6.
- `Lista_Capitulo_4/*.c`: um arquivo-fonte independente para cada questão prática (7 a 28).

## Como compilar

Entre na pasta `Lista_Capitulo_4` e compile cada exercício separadamente.

Exemplo:

```bash
gcc 07_raiz_ou_quadrado.c -o exercicio07 -lm
./exercicio07
```

Para os demais:

```bash
gcc nome_do_arquivo.c -o programa
./programa
```

Os exercícios que usam funções matemáticas (`sqrt` ou `pow`) precisam da opção `-lm` ao final do comando de compilação.

## Observações

- Cada arquivo `.c` contém seu próprio `main`, portanto compile e execute um exercício por vez.
- Os programas foram escritos de forma independente e incluem validações básicas de entrada.
- A questão 25 solicita cédulas de R$ 100, 50, 20, 10, 5 e 2. Se o troco restante for R$ 1, o programa informa que esse valor não pode ser representado apenas com as cédulas listadas.
- Na questão 23, o enunciado pede validação do mês. O programa também faz uma validação simples do dia (1 a 31), sem verificar a quantidade exata de dias de cada mês.
