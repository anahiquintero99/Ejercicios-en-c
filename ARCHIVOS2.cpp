#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
	
	main()
	{
		int cell;
		int num_call;
		float time;
		FILE *fp;
		
		if (( fp = fopen("llamadas.txt","r")) == NULL)
		{
			printf(" No se puede abrir el archivo");
		}
		else
		{
			while (!feof(fp))
			{
				fscanf(fp, "%d, %d, %.2f", cell, num_call, time);
				printf("%d %d %.2f\n", cell, num_call, time);
			}
		}
	 	fclose(fp);
		system("pause");
	}
