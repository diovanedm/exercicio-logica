#include <stdio.h>

void mostrarPalavra(char nome[], int count) {
    for (int i = 0; i <= count; i++) {
        printf("%c", nome[i]);
    }
    printf(" \n");
}

int main(void) {
    
    char palavra1[] = "Julio";
    char palavra2[] = "Diovane";
    // int numero[] = {1,2,3,4,5,6};

    if(palavra1[0] < palavra2[0]) {
        mostrarPalavra(palavra1, sizeof palavra1 - 2);
        mostrarPalavra(palavra2, sizeof palavra2 - 2);
    } else {
        if (palavra1[0] == palavra2[0]) {
            if(palavra1[sizeof palavra1 - 2] < palavra2[sizeof palavra1 - 2]) {
                mostrarPalavra(palavra1, sizeof palavra1 - 2);
                mostrarPalavra(palavra2, sizeof palavra2 - 2);
            } else {
                mostrarPalavra(palavra2, sizeof palavra2 - 2);
                mostrarPalavra(palavra1, sizeof palavra1 - 2);                
            }
        } else {
            mostrarPalavra(palavra2, sizeof palavra2 - 2);
            mostrarPalavra(palavra1, sizeof palavra1 - 2);
        }
    }

    return 0;
}