// Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o início
// do dia.

#include <stdio.h>

int main(void) {
    
    int hora, minuto, minutoTotal;

    hora = 12;
    minuto = 30;
    minutoTotal = 60 * hora + minuto;

    printf("%i", minutoTotal);
    
    return 0;
}