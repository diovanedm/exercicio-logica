#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {

    int razao, nEsimo, priTermo, calculo;

    printf("Digite o n-ésimo termo: ");
    scanf("%i", &nEsimo);

    printf("Digite a razão: ");
    scanf("%i", &razao);

    printf("Digite o primeiro termo: ");
    scanf("%i", &priTermo);

    system("clear");

    calculo = priTermo * pow(razao, nEsimo - 1);
    printf("a%i = %i * %i^(%i-1) = %i\n", nEsimo, priTermo, razao, nEsimo, calculo);

    calculo = priTermo * razao;
    printf("a%i = %i * %i = %i\n", nEsimo, priTermo, razao, calculo);

    calculo = priTermo * razao;
    printf("a%i = %i", nEsimo, priTermo);
    
    return 0;
}