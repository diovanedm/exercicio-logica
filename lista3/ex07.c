#include <stdio.h>

int main(void) {
    
    int maior, menor;

    maior = 21;
    menor = 21;

    if(maior > menor) {
        printf("maior: %i\n", maior);
    }else if (maior < menor) {
        printf("maior: %i\n", menor);
    } else {
        printf("Valores iguais\n");
    }

    return 0;
}