#include <stdio.h>

int main(void) {

    int valor, anterior, proximo;
    valor = 0;
    anterior = 0;

    printf("Digite o valor para gerar os numeros de fibonacci: ");
    scanf("%i", &valor); //1

    anterior = 1;
    printf("%i %i ", anterior, valor);

    for (int i = 0; i <= 5; i++) {
        proximo = valor + anterior;
        anterior = valor;
        valor = proximo;
        printf("%i ", proximo);
    }
    printf("\n");
    return 0;
}