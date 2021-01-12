#include <stdio.h>

int main(void) {
    float a, b, x;
    x = 0;
    a = 5;
    b = 10;

    // formula ax + b = 0
    x = -b/a;
    printf("%.2f\n", x);

    return 0;
}