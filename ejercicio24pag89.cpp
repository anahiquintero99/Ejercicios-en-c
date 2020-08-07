#include<stdio.h>
#include<conio.h>
	main()
	{
		int mult, j, i;
		printf("*****TABLAS DE MULTIPLICAR 1-10******\n");
		for(i=1;i<=10;i++)
		{
			for(j=1;j<=10;j++)
			{
				mult=i*j;
				printf("%d * %d = %d \n", i, j, mult);
			}
			printf("****************************************\n");
		}
		
	}
