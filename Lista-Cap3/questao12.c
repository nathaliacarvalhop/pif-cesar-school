#include <stdio.h>

int main(void) {
    int C;
    double F, K;

    printf("Celsius\tFahrenheit\tKelvin\n");

    for (C = 0; C <= 100; C += 5) {
        F = (9.0 * C) / 5.0 + 32.0;
        K = C + 273.15;

        printf("%3d\t%10.2f\t%7.2f\n", C, F, K);
    }

    return 0;
}
