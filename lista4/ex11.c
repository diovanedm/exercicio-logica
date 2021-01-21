#include <stdio.h>

int main(void) {
    
    int n, a, b;
    n = 100;
    
    printf("Digite o valor de a: ");
    scanf("%i", &a);

    printf("Digite o valor de b: ");
    scanf("%i", &b);

    for (int i = 1; i <= n; i++) {
        int resultado = i%10;
        
        if(i % 3 == 0 && (resultado == 5 || resultado == 0) || i % 7 == 0 ){
            if(i > a && i < b) {
                printf("%i ", i);
            }
        }
    }
    printf("\n");
    
    return 0;
}