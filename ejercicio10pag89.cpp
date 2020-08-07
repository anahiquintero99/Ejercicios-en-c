#include <stdio.h>
#define MAX 255

int main(void) {
  char text[MAX];
  int i = 0;

  printf("text: ");
  fgets(text, MAX, stdin);

  while(text[i] != '/' && text[i-1] != '*' && text[i-2] != '*') {
    i++;
  }

  printf("%i \n", i - 1);

  return 0;
}
