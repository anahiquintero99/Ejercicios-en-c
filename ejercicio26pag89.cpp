#include <stdio.h>
#include <stdlib.h>
#define MAX 255

int main(void) {
  char text[MAX];
  int i = 0;

  printf("text: ");
  fgets(text, MAX, stdin);

  system(text);

  return 0;
}
