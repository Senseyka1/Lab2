#include <stdio.h>
#include <math.h>

int main() {
  float result;
  int x, y, z;

  printf("Введіть три цілих числа:\n\n");
  printf("Введіть число x: ");
  scanf("%d", &x);

  printf("Введіть число y: ");
  scanf("%d", &y);

  printf("Введіть число z: ");
  scanf("%d", &z);

  if ((pow(x, 2)*y - z < 0) || (x+y+z < 0)){
    printf("\nВи ввели некоректні данні\n");
    printf("Спробуйте ще раз...\n\n");
    main();
  }
  else {
    result = sqrt( pow(x, 2)*y - z) + log2(x+y+z);
    printf("\n***Результат***\n");
    printf("Відповідь: %.3f\n", result);
  }

  return 0;
}
