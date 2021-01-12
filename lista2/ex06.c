#include <stdio.h>
#include <math.h>

int main(void) {
  float x, y1, y2, y4, y5;

  x = 90;

  y1 = cos(x);
  y2 = atanf(x);
  y4 = sinf(x) + sinf(powf(x, 2)) + sinf(powf(x, 3)) + sinf(powf(x, 4));
  y5 = sinf(x) + powf(sinf(x), 2) + powf(sinf(x), 3) + powf(sinf(x), 4);

  printf("%f\n", y1);
  printf("%f\n", y2);
  printf("%f\n", y4);
  printf("%f\n", y5);
}