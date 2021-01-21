#include <stdio.h>

int main(void) {
    
    int n;
    n = 100;
    


    for (int i = 1; i <= n; i++) {
        int resultado = i%10;
        
        if(i % 3 == 0 && (resultado == 5 || resultado == 0) || i % 7 == 0 ){
            printf("%i ", i);
        }
    }
    printf("\n");
    
    return 0;
}