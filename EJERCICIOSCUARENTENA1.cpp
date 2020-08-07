#include <stdio.h>
#include <conio.h>
	void lectura();
	main()
	{
		lectura();
		getch();
	}

	void lectura()
	{
 		FILE *fp;
 		char concepto[20];
 		int clave_art,precio, existencia, ume;

 		if((fp=fopen("artic.txt","r"))==NULL)
 			{
 				printf("NO puedo abrir el archivo...");
 			}
 		else	
		{
 			while(!feof(fp))
		
 	
	{
	fscanf(fp,"%d%s%d%d%d",&clave_art,concepto,&precio,&existencia, &ume);
 	printf("%d %s %d %d %d\n",clave_art,concepto,precio,existencia, ume);
	}
	
 	printf("\n");
	printf("Archivo leído......");
	}

	fclose(fp);
	}
