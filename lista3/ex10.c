#include <stdio.h>

int main(void) {
    
    int dia, mes, ano, modulo;
    
    dia = 20;
    mes = 10;
    ano = 1996;
    modulo = ano % 4;

    if (modulo == 0) {
        printf("%i é um ano bissexto\n", ano);
    } else {
        printf("%i não é um ano bissexto\n", ano);
    }
   
    return 0;
}