#include <stdio.h>
#include <math.h>
int main(void) {

  float a, b, c, x, delta, y1, y2, numerador, denominador;

  a = 1;
  b = -1;
  c = -12;

  delta = powf(b, 2) - 4 * a * c;
  printf("%f\n", delta);

  denominador = 2 * a;

  y1 = -b - sqrtf(delta)/denominador;
  y2 = -b + sqrtf(delta)/denominador;

  
  printf("%.1f\n%1.f\n", y1, y2);
  printf("%.f", denominador);

  return 0;
}