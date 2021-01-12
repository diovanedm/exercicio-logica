// Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal.


#include <stdio.h>
#include <math.h>

int main(void) {
    float base, altura, perimetro, area, diagonal;
    
    base = 50.0;
    altura = 20.0;
    diagonal = 0;
    area = 0;
    perimetro = 0;

    perimetro = (base * 2) + (altura * 2);
    area = base * altura; 
    diagonal = sqrt(perimetro);
    
    printf("%.2f \n", diagonal);

    return 0;
}
