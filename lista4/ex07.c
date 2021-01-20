#include <stdio.h>

int main(void) {

    int nEsimo, anterior, atual, proximo;

    atual = 1;
    anterior = 1;

    printf("Digite o n-ésimo nEsimo: ");
    scanf("%i", &nEsimo); //8 == 21
    if (nEsimo > 2) {
        for (int i = 1; i < nEsimo-1; i++) {
            proximo = atual + anterior;
            anterior = atual;
            atual = proximo;
        }
        nEsimo = proximo;
        printf("%i ", nEsimo);
    } else {
        printf("1");
    }

    printf("\n");
    return 0;
}