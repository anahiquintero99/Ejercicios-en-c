#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	
	main()
	{
		char product [30];
		int num;
		float price;
		FILE *fp;
		
		if (( fp = fopen("inventario.txt","r")) == NULL)
		{
			printf(" No se puede abrir el archivo");
		}
		else
		{
			while (!feof(fp))
			{
				fscanf(fp, "%s, %d, %.2f", product, num, price);
				printf("%s %d %.2f\n", product, num, price);
			}
		}
	 	fclose(fp);
		system("pause");
	}
