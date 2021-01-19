#include <stdio.h>

int main(void) {

    int valor, anterior, proximo, numero;
    valor = 0;
    anterior = 0;
    proximo = 0;
    numero = 0;

    printf("Digite o valor para gerar os numeros de fibonacci: ");
    scanf("%i", &valor); //1
    printf("Imprimir números menores que: ");
    scanf("%i", &numero); //1


    anterior = 1;
    printf("%i %i ", anterior, valor);

    while (proximo < numero) {
        proximo = valor + anterior;
        anterior = valor;
        valor = proximo;
        if (proximo < numero) {
            printf("%i ", proximo);
        }
    }
    printf("\n");
    return 0;
}