#include <stdio.h>



int main(void) {
    int opcao, valor, soma;
    opcao = -1;
    valor = 0;
    soma = 0;

    while(opcao != 0) {
        printf("Digite 0 ou 1 para continuar: ");
        scanf("%i", &opcao);
        if(opcao != 0) {
            printf("Digite o valor: ");
            scanf("%i", &valor);
            soma = soma + valor;
            printf("\n");
        }
    }
    printf("valor total = %i\n", soma);
       
    return 0;
}