#include <stdio.h>

int main(void) {
    
    float maior, menor;

    maior = 14;
    menor = 18;

    if(maior > menor) {
        printf("maior: %f\n", maior);
        printf("menor: %f\n", menor);
    } else {
        printf("maior: %f\n", menor);
        printf("menor: %f\n", maior);
    }
    
    return 0;
}