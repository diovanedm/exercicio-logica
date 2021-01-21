#include <stdio.h>

int main(void) {
    int R, I;
    R = 2;
    I = 5;

    for (int i = 0; i <= 10; i++) {   
        if (I < 10 && I > 0) 
        {
            printf("I = %i\n", I);
            I = I - 2;
        }
        if (R < 10)
        {   
            printf("R = %i && I = %i\n\n", R, I);
            R = R+1;
        }
        
    }
return 0;
}