#include <stdio.h>

int main(void) {
    
    float maior, menor;

    maior = 21;
    menor = 21;

    if(maior > menor) {
        printf("maior: %f\n", maior);
    }else if (maior < menor) {
        printf("maior: %f\n", menor);
    } else {
        printf("Valores iguais\n");
    }

    return 0;
}