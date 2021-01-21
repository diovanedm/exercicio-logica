#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    char a = 'A';

    if(a >= 65 && a <= 122) {
        if(islower(a)){
            printf("Minúscula\n");
        } else if(isupper) {
            printf("Maiuscula\n");
        } 
    }else {
        printf("Dígito\n");
    }
    
    return 0;
}