#include <stdio.h>
#include <math.h>

int main(void)
{
  float x1, x2, y1, y2, result;

  printf("x1: ");
  scanf("%f", &x1);
  printf("y1: ");
  scanf("%f", &y1);

  printf("\nx2: ");
  scanf("%f", &x2);
  printf("y2: ");
  scanf("%f", &y2);

  result = sqrt(
    pow((x2 - x1), 2) + pow((y2 - y1), 2)
  );

  printf("\nresult: %f \n", result);

  return 0;
}
