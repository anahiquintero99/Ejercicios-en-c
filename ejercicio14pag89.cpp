#include <stdio.h>
#define MAX 255

int main(void)
{
  char text[MAX];
  int i = 0, cont = 0;

  printf("text: ");
  fgets(text, MAX, stdin);

  while(text[i] != '\n') 
  {
    if (text[i] == '.' || text[i] == ';' || text[i] == ',' || text [i] == ':') {
      cont++;
    }
    i++;
  }

  printf("%i \n", cont);

  return 0;
}
