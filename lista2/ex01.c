// Ler um número entre 0 e 60 e mostrar o seu sucessor. Considere que o sucessor de 60 é 0 e não
// utilize comandos de repetição nem de seleção.

#include <stdio.h>

int main(void) {
    int antecessor, numero, sucessor;
    
    numero = -1;
    
    if (numero >= 0 && numero <= 60) {

        if (numero == 60) {
            antecessor = numero - 1;
            sucessor = 0;
        }

        else if (numero == 0) {
            antecessor = 60;
            sucessor = numero + 1;
        }

        else {
            antecessor = numero - 1;
            sucessor = numero + 1;
        }
    
        printf("antecessor: %i \n", antecessor);
        printf("numero: %i \n", numero);
        printf("sucessor: %i \n", sucessor);
    }

    else {
        printf("Numero tem que ser entre 0 e 60");
    }


    return 0;
}