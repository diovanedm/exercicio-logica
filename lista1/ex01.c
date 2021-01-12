/* 1 - Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e unidade)
e mostrar o número invertido (no formato UDC). O número invertido deve ser armazenado em
outra variável antes de ser mostrado.*/

#include <stdio.h>


int main(void) {
    int cdu, udc[5];
    cdu = 123;
    for (int i = 0; i < 3; i++) {
        udc[i]  = cdu % 10;
        printf("%i", udc[i]);
        cdu = cdu / 10;
    }    
    printf("\n");
}