#include <stdio.h>

int main(void) {

    float a, b, diferenca, divisao;

    a = 10;
    b = 15;
    diferenca = 0;
    divisao = 0;
    
    if(a > b) {
        diferenca = a - b;
    } else {
        diferenca = b - a;
    }

    if (b != 0) {
        divisao = a / b;
    }

    printf("Diferença entre A e B é %.2f \n", diferenca);
    printf("%.2f / %.2f = %.2f\n", a, b, divisao);

    return 0;
}