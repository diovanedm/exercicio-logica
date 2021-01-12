#include <stdio.h>
#include <math.h>

int main(void){

    float p, i, n, rendimento;

    p = 200;
    i = 0.5;
    n = 12;

    rendimento = p * (powl(1 + i, n) - 1 / i);

    printf("%.f", rendimento);

    return 0;
}