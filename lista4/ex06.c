#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char mensagem[50], K;

    printf("Digite a mensagem que deseja criptografar: ");
    fgets(mensagem, 50, stdin);

    printf("Digite uma letra para ajudar na criptografia: ");
    scanf("%c", &K);

    int tamanho = strlen(mensagem);
    for (int i = 0; i < tamanho -1; i++) {
        
        int letra = mensagem[i] + K;
        printf("%c\n", letra);   
        
    }
    
    return 0;
}