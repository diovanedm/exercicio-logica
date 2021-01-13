#include <stdio.h>

int main(void) {

    char a, b;
    
    a = 'A';
    b = 'B';
    
    if(a < b) {
        printf("%c%c", a, b);
    } else {
        printf("%c%c", b, a);
    }


    return 0;
}