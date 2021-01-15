#include <stdio.h>

int main(void) {
    
    float numero;

    numero = -1;
    
    if(numero < 0) {
        printf("Numero menor que 0");
    } else if(numero > 0) {
        printf("Numero maior que 0");
    } else {
        printf("Numero igual a 0");
    }
    
    return 0;
}