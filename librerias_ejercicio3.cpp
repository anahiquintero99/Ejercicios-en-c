#include <stdio.h>
#include <conio.h>
#include "circunferencia.h"

int main()
{
	float radio = 0;
	printf("Indique el tamaño del radio de la circunferencia: ");
	scanf("%f", &radio);
	printf("El perimetro de la circunferencia es: %f", perimetro(radio));
	
	getch();
	
}

