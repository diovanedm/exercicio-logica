#include <stdio.h>
#include <math.h>

int main(void) {
    
    float a, b, c, y;
    a = 1;
    b = 1;
    c = 1;

    y =  a + (b / c + a) + 2 * (a - b) + log2(64);

    printf("valor de y = %f", y);

    return 0;
}