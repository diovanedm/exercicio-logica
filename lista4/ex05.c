#include <stdio.h>

int main(void) {

    int multiplo, resultado;
    multiplo = 5;
    resultado = 0;

    for (int i = 0; i <= 10; i++)
    {
        resultado = multiplo * i;
        printf("%i ", resultado);
    }
    printf("\n");
    

    return 0;
}