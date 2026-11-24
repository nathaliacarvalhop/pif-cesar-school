# Lista-Cap5

Esta pasta contém `respostas.md` (questões teóricas) e um arquivo `.c` para cada questão prática (07 a 28), além de `areas.h` exigido na questão 22.

## Compilar e testar

Entre na pasta e compile cada programa separadamente, por exemplo:

```bash
gcc 07_soma.c -o 07_soma
./07_soma
```

Na questão 22, mantenha `areas.h` na mesma pasta de `22_areas.c`.
Na questão 24, para testar a compilação condicional:

```bash
gcc 24_compilacao_condicional.c -o programa
gcc -DDEBUG 24_compilacao_condicional.c -o programa_debug
```

## Enviar ao GitHub

Copie a pasta `Lista-Cap5` para dentro do repositório usado nas listas anteriores e execute:

```bash
git add Lista-Cap5
git commit -m "Adiciona lista do capítulo 5 - funções"
git push
```
