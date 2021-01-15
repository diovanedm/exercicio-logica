#include <stdio.h>

int main(void) {

    char nome1[] = "Diovane";
    char nome2[] = "Diovane";
    int count = sizeof nome1 -1;

    for (int i = 0; i < count; i++) {
        if(nome1[i] == nome2[i]) {
            printf("%c %c\n", nome1[i], nome2[i]);
        } else {
            printf("%c %c -------------\n", nome1[i], nome2[i]);
            printf("Nomes diferentes\n");
            break;
        }
        
        if(i == count -1) {
            printf("Nomes iguais\n");
        }
    }
    
    
    return 0;
}