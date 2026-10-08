#include <stdio.h>

int main(void) {
    int codigo;

    printf("Decimal\tHexadecimal\tCaractere\n");

    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%3d\t%10X\t\t%c\n", codigo, codigo, codigo);
    }

    return 0;
}
