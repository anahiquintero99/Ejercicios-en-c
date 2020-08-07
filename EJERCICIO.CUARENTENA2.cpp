#include <stdio.h>
#include <conio.h>
 void lectura();
 void imprime();
 FILE *fp;
 char concepto[20][20];
 int clave_art[20],precio[20], existencia[20], ume[20];
 int i;
	main()
	{
		lectura();
		imprime();
		getch();
	}
	// Función que lee los registros y los alamacena en arreglos

	void lectura()
	{
 		if((fp=fopen("artic.txt","r"))==NULL)
 	{
 	printf("NO puedo abrir el archivo...");
 	}
 	else
 	{ i=0;
 		while(!feof(fp))
 		{
			fscanf(fp,"%d %s %d %d %d",&clave_art[i],concepto[i],&precio[i],&existencia[i], &ume[i]);
 			i++;
		}
 	printf("\n 1) Archivo leído del disco......\n\n");
	}
 	fclose(fp);


	}
	// función que toma los registros de los arreglos y los muestra en pantalla

	void imprime()
	{
		printf("\n 2) Datos recuperados de los arreglos -- Están en la memoria del CPU, no en el disco \n");
		for(i=0;i<10;i++)
		{
			printf("%d %s %d %d %d\n",clave_art[i],concepto[i],precio[i],existencia[i], ume[i]);
		}
	}

