#include <stdio.h>
#include <math.h>

int main(void) {

  float numero;

  printf("Digite um numero: ");
  scanf("%f", &numero);
  
  if(numero == 1 || numero == 2) {
    float lado1 = 20;
    float lado2 = 10;
    float d = sqrt(pow(lado1, 2) + pow(lado2, 2)) / 2 ;

    printf("%f", d);             

  } else if(numero == 3 || numero == 4 || numero == 5) {
    
  }

  return 0;
}