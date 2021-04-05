#include <stdio.h>
#include <math.h>

int main() {
  float y;
  const float a = 6;
  const float b = 0;
  const float c = 11;

  y = ((a*b + a*c - b*c) / (2*a - b)) - (5 / (a+b));

  printf("***Результат***\n\n");
  printf("Відповідь: ");
  printf("y = %.2f", y);
  return 0;
}