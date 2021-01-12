// Ler dois números reais e salva-los nas variáveis A e B. Em seguida, troque dos valores das duas
// variáveis de forma que a variável A passe a ter o valor da variável B e vice-versa. No final, mostre
// os valores finais.

#include <stdio.h>

int main(void) {
    float a, b, temp;

    a = 10; 
    b = 20; 
    temp = 0; 

    printf("a = %f\n", a);
    printf("b = %f\n", b);

    temp = b;
    b = a;
    a = temp;

    printf("a = %f\n", a);
    printf("b = %f\n", b);


}