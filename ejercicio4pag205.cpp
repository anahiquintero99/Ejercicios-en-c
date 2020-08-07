#include <stdio.h>
#include <conio.h>
	
	void comprobar (int numero)
	{
		if ( numero == 0 )
			printf("el numero es nulo ");
		else
		{
			int residuo=0;
			residuo= numero%2;
			if (residuo == 0)
				printf("El numero es par ");	
			else
				printf("El numero es impar ");
		}	
	}
	
	int main ()
	{
		int numero = 0;
		printf("Introduce el valor:\n");
		scanf("%d", &numero);
		comprobar(numero);
		getch();
	}
	
