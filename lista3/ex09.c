#include <stdio.h>

int main(void) {
    
    int lado1, lado2, lado3;

    lado1 = 15;
    lado2 = 15;
    lado3 = 10;

    if(lado1 < 90 && lado2 < 90 && lado3 < 90) {
        printf("Triangulo Acutângulo\n");
    } else if(lado1 == 90 || lado2 == 90 || lado3 == 90) {
        printf("Triangulo Retângulo\n");
    } else {
        printf("Triangulo Otusângulo\n");
    }
    
    return 0;
}