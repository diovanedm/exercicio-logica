#include <stdio.h>

void mostrarNumero(int numero[3]) {
  for (int i = 0; i < 3; i++) {
    printf("%i", numero[i]);    
  }
  printf("\n");
}

int main(void) {
  int num1, cdu[3], udc[3], totalCduUdc[3];

  printf("Digite um numero: ");
  scanf("%i", &num1);

  int i2 = 2;
  for (int i = 0; i < 3; i++) {
    udc[i] = num1 % 10;
    cdu[i2] = num1 % 10;
    
    num1 = num1 / 10;
    i2 = i2 - 1;
  }

  for (int i = 0; i < 3; i++) {
    totalCduUdc[i] = udc[i] + cdu[i];
  }
  
  int soma = 0;
  for (int i = 0; i < 3; i++) {
    soma = soma + totalCduUdc[i] * (i + 1);
  }

  int codVerificacao = soma % 10;

  printf("cdu = ");
  mostrarNumero(cdu);

  printf("udc = ");
  mostrarNumero(udc);

  printf("soma entre eles é: ");
  mostrarNumero(totalCduUdc);

  printf("\n----------------------------------------- \n\n");

  printf("O resultado da multiplicação de cada dígito da soma por sua posição é: ");
  printf("%i\n", soma);

  printf("Código de verificação é: ");
  printf("%i\n", codVerificacao);

  return 0;
}

