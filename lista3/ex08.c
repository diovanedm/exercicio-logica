#include <stdio.h>

int main(void) {
    
    int lado1, lado2, lado3;

    lado1 = 15;
    lado2 = 15;
    lado3 = 10;

    if(lado1 != lado2 && lado2 != lado3 && lado3 != lado1) {
        printf("Triangulo Escaleno\n");
    } else if(lado1 == lado2 && lado2 == lado3 && lado3 == lado1) {
        printf("Triangulo Equilátero\n");
    } else {
        printf("Triangulo Isósceles\n");
    }
    
    return 0;
}