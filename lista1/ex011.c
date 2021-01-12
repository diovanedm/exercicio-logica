// Ler o numerador e o denominador de uma fração e transformá-la em um número decimal.

#include <stdio.h>
#include <math.h>

int main(void) {
    int denominador;
    float numerador, decimal;

    numerador = 15;
    denominador = 1000;
    decimal = 0;

    decimal = numerador / denominador;
    printf("%f", decimal);

    return 0;
}



