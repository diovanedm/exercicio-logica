// Ler a razão e o primeiro termo de uma PA e mostrar o seu decimo termo.

#include <stdio.h>

int main(void) {

  float razao, primeiroTermo;
  
  razao = 2;
  primeiroTermo = 2;

  for (int i = 0; i <= 8; i++) {
    primeiroTermo = primeiroTermo + razao; 
  }

  printf("%f", primeiroTermo);
  return 0;
}

// 2 4 6 8 10 12 14 16 18 20 