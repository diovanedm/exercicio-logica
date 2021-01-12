//  Ler o lado de um quadrado e mostrar o seu perímetro, área e diagonal.

#include <stdio.h>
#include <math.h>

int main(void) {
    
    float lado, area, perimetro, diagonal;

    lado = 8;
    perimetro = lado * 4;
    area = lado * 2;

    diagonal = sqrt((lado * lado) + (lado * lado));
    printf(" área: %f\n perimetro: %f\n diagonal: %f", area, perimetro, diagonal);

    return 0;
}