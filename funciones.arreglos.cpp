#include <stdio.h>
#include <conio.h>
//variables globales
	int num [10];
	int i;
	//funcion pedir
	pedir ()
	{
		for ( i=0; i<10; i++)
		{
			printf("Teclea numero:\n");
			scanf("%d", &num[i]);
		}
	}
	//funcion imprimir
	imprime()
	{
		for ( i=0; i<10; i++)
		{
			if (num[i] > 10)
			{
				printf("%d.- %d\n", i, num[i]);
			}
		}
	}
	//programa principal
	main()
	{
		pedir ();
		imprime ();
		getch();
	}
