// Ler com o raio de um círculo e mostrar o seu perímetro e área.

#include <stdio.h>

int main(void){

    float raio, perimetro, area;

    raio = 7;
    perimetro = raio * 2 * 3.14;
    area = raio * raio * 3.14;
    
    printf("%f\n%f", perimetro, area);

    return 0;
}