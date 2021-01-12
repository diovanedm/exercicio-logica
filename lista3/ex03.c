#include <stdio.h>

int main(void) {
    int a, b, c, soma;
    
    a = 5;
    b = 3;
    c = 3;

    soma = 0;

    if (a > 0 && b > 0 && c > 0) {
        if (a > b && a > c) {
            soma = b + c;
            if (a < soma) {
                printf("Os lados formam um triângulo");
            } else {
                printf("Os lados não formam um triângulo");
            }
        }
        else if (b > a && b > c) {
            soma = a + c;
            if (b < soma) {
                printf("Os lados formam um triângulo");
            } else {
                printf("Os lados não formam um triângulo");
            }
        }
        else if (c > a && c > b) {
            soma = b + a;
            if (c < soma) {
                printf("Os lados formam um triângulo");
            } else {
                printf("Os lados não formam um triângulo");
            }
        }
    }
    

    return 0;
}