// Ler os valores dos catetos de um triângulo retângulo e mostrar a hipotenusa. 

#include <stdio.h>
#include <math.h>

int main(void) {
    
    float ca, co, hipotenusa;
    ca = 12;
    co = 10;
    hipotenusa = sqrt((ca * ca) + (co * co));

    printf("hipotenusa: %f", hipotenusa);

    return 0;
}