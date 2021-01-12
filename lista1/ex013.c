// Ler o valor do salário mínimo e o valor do salário de uma pessoa, calcular e mostrar quantos
// salários mínimos essa pessoa ganha.

#include <stdio.h>

int main(void) {
    float salarioMinimo, salario, qtdSalarios;

    salarioMinimo = 1500;
    salario = 4500;
    qtdSalarios = salario / salarioMinimo;

    printf("%.f\n", qtdSalarios);

    return 0;
}