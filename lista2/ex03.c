/*Faça um pequeno sistema para locadoras de DVD. Para isso, leia a quantidade de DVDs que
a locadora possui e o valor que ela cobra por cada aluguel. Em seguida calcule e mostre: o
faturamento anual da locadora sabendo que um terço dos DVDs são alugadas por mês; o valor
arrecadado com multas por mês sabendo que quando o cliente atrasa a entrega, a locadora cobra
uma multa de 10% sobre o valor do aluguel e que um décimo dos DVDs alugados são devolvidos
com atraso; a quantidade de DVDs que a locadora terá no final do ano sabendo que 2% deles se
estragam ao longo do ano e que um décimo do total é comprado para a reposição.*/

#include <stdio.h>

int main(void) {

  float qtdDvds, qtdDvdsFinalAno;
  float valorAluguel, fatAnual, fatAnualComMulta;

  qtdDvds = 3000;
  valorAluguel = 10;
  fatAnual = qtdDvds/3 * 12 * 10;
  fatAnualComMulta = qtdDvds/10 * 12 * (valorAluguel/10) + fatAnual;

  printf("faturamento anual: %.2f \n", fatAnual);
  printf("faturamento anual com Multa: %.2f", fatAnualComMulta);

  return 0;
}