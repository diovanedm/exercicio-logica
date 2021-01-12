#include <stdio.h>

int vericarTriangulo(int num1, int num2, int num3) {
    int soma = 0;

    if(num1 > num2 && num1 > num3) {
        soma = num2 + num3;
        if (num1 < soma) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return -1;
    }
}

int main(void) {
    int a, b, c;
    int valores[3] = {a, b, c};
    char nomesValores[3] = "abc";

    for (int var = 0; var < 3; var++) {
        printf("Digite o valor de %c: ", nomesValores[var]);
        scanf("%i", &valores[var]);
    }

    int retorno = 0;
    int aux = 0;
    for (int i = 0; i < 3; i++) {
        retorno = vericarTriangulo(valores[0], valores[1], valores[2]);
         
        if (retorno == -1 || retorno == 0) {
            aux = valores[2];
            valores[2] = valores[1];
            valores[1] = valores[0];
            valores[0] = aux;
        } else {
            printf("Estes valores formam um triângulo\n");
            break;
        }
    }
    
    if(retorno != 1) {
        printf("Estes valores não formam um triângulo");
    }

    return 0;
}