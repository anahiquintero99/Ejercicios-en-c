#include <stdio.h>
#include <conio.h>

	int main ()
	{
		int edad[500];
		int i;
		int edadtotal=0, prom;
		for (i=1 ; i<=500 ; i++)
		{
			printf("Ingresa edad:\n");	
			scanf("%d", &edad[i]); 
			edadtotal = edadtotal + edad[i];
		}
		for (i=1 ; i<=500 ; i++)
		{
			printf("\n%d.- %d", i, edad[i]);
		}
    	prom= edadtotal/500;
    	printf("\nLa edad promedio es:\n%d", prom);
    	getch();
	}	

