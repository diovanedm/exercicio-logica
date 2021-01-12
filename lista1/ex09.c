// Ler a razão e o primeiro termo de uma PG e mostrar o seu quinto termo.

#include <stdio.h>

int main(void) {

  float razao, primeiroTermo;
  
  razao = 2;
  primeiroTermo = 2;

  for (int i = 0; i <= 3; i++) {
    primeiroTermo = primeiroTermo * razao; 
  }

  printf("%f", primeiroTermo);
  return 0;
}

// 2 4 8 16 32 