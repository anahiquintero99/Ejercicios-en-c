#include <stdio.h>
#include <conio.h>
#include "suma.h"

int main()
{
	int valora = 0, valorb = 0;
	printf("Introduce el valor a: ");
	scanf("%d", &valora);
	printf("Introduce valor b: ");
	scanf("%d", &valorb);
	printf("El resultado es: %d ", suma(valora,valorb));
	getch();
}
