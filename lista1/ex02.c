/* 2 - Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, faça um algoritmo que
leia o valor do salário mínimo e a quantidade de kilowatt gasta por uma residência, calcule e
mostre: o valor em reais de cada kilowatt; o valor em reais a ser pago; e o novo valor a ser pago
por essa residência com um desconto de 10%.*/

#include <stdio.h>

int main(void){
    float salarioMinimo, precoKilowatt, KilowattGasto, valorAPagar, valorDesconto;
    salarioMinimo = 1087;
    precoKilowatt = salarioMinimo / 7 / 100;
    KilowattGasto = 600;
    valorAPagar = KilowattGasto * precoKilowatt;
    valorDesconto = valorAPagar * 0.1;
    printf("O kilowatt corresponde a %.2f \n", precoKilowatt);
    printf("Valor a pagar: %.2f \n", valorAPagar);
    printf("Desconto de: %.2f \n", valorDesconto);
}