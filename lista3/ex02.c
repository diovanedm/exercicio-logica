#include <stdio.h>

int main(void) {

    int resto, numero;
    resto = 0;
    numero = 200;

    resto = numero % 7;
    if (resto == 0) {
        printf("Este número é divisivel por 7 \n");
    } else {
        printf("Este numero não é divível por 7 \n");
    }
    printf("resto = %i \n", resto);
        
    return 0;
}