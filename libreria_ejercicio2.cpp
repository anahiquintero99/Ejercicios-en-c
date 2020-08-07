#include <stdio.h>
#include <conio.h>
#include "areas.h"

int main()
{
	int opcion = 0, a = 0, b = 0;
	printf("Opciones \n 1:Calcular area del cuadrado\n 2: Calcular area del rectangulo\n");
	printf("Introduce la opcion: ");
	scanf("%d", &opcion);
	if (opcion == 1)
	{
		printf("Cual es el valor del lado: ");
		scanf("%d", &a);
		printf("El area es de %d", cuadrado(a));	
	}
	else if (opcion == 2)
	{
		printf("Cual es el valos del ancho: ");
		scanf("%d", &a);
		printf("Cual es el valor del largo: ");
		scanf("%d", &b);
		printf("El area es de %d", rectangulo(a, b));
	}
	else
		printf("No existe esa opcion.");
		
	getch();
}
