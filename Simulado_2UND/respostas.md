# Simulado – PIF 2026.2
## Questões de múltipla escolha

| Questão | Alternativa | Justificativa |
|---|---|---|
| 01 | **b** | O `else` está associado ao `if (b > 5)`. Como `b` vale 3, imprime `Y`; depois imprime `Z`. |
| 02 | **c** | A execução começa no `case 2`: soma 2 e, sem `break`, continua no `case 3` e soma 3. Total: 5. |
| 05 | **d** | Os argumentos são passados por valor. A função altera apenas cópias locais, então `x` e `y` continuam 3 e 7. |
| 06 | **a** | `f(4) = 4 + f(3) = 4 + 3 + 2 + 1 = 10`. |
| 10 | **c** | `m[0][2] + m[1][1] + m[2][0] = 3 + 5 + 7 = 15`. |
| 11 | **b** | `strcat` concatena `2026` a `PROVA`; a string fica `PROVA2026`, com 9 caracteres. |
| 16 | **c** | A atribuição copia os campos da estrutura. Alterar `b.x` para 9 não modifica `a.x`, que permanece 1. |
| 17 | **d** | Uma união ocupa espaço suficiente para seu maior membro. O maior é `double`, com 8 bytes. |

As demais questões são de implementação e estão nos arquivos `q03.c`, `q04.c`, `q07.c` a `q09.c`, `q12.c` a `q15.c` e `q18.c` a `q20.c`.
