#include <stdio.h>

int main(void) {
    int numero;

    numero = 11;

    if(numero % 2 == 0) {
        numero = numero * 2;
        printf("%i", numero);
    } else {
        numero = numero * 3;
        printf("%i", numero);
    }

    return 0;
}