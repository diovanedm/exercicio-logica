#include <stdio.h>
#include <math.h>

int main(void) {

  float e, y1, m, c, y2, k, y3;

  e = 2.718281828;
  y1 = pow(e, 1.23 * e) + pow(e, -1.23 * e);

  m = 4.26;
  c = 1.1;
  y2 = pow(m*c, 2) - sqrtf(m*c) + log(m*c);

  k = 2.2 * powf(10, 23);
  y3 = k + sqrtf(powf(k, 1.25)) / powf(k, 1.25) + powf(k, 1.25);  

  printf("%f\n", y1);
  printf("%f\n", y2);
  printf("%f\n", y2);
}