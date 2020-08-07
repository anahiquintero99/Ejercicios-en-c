#include <stdio.h>
#include <conio.h>
main ()
{
	int i, luz[10] , gasto, pagototal;
	for (i=0 ; i<10 ; i++)
	{
		printf("Gasto por luz:\n");
		scanf("%d", &luz[i]);
		gasto= gasto + luz[i];
	}
	for (i=0 ; i<10 ; i++)
	{
		printf("\n%d.- %d pesos", i, luz[i]);
	}
	printf("\nEl pago total es:\n%d pesos", gasto); 
}
