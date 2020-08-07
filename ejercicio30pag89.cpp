#include <stdio.h>

int factorial(int n);

int main(void) {
  int n;

  printf("n: ");
  scanf("%i", &n);

  printf("factorial: %d \n", factorial(n));

  return 0;
}

int factorial(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

