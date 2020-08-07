#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
								
main()
{
	int bol;
	char nombre[500], AP[500], AM[500];
	float promedio;
	FILE *fp;
	if((fp=fopen("alumnos.txt","r"))==NULL)
	{
		printf("NO PUEDO ABRIR EL ARCHIVO, REVISA TU DOCUMENTO.\n");
	}
	else
	{
		while(!feof(fp))
		{
			fscanf(fp,"%d %s %s %s %f", &bol,nombre,AP,AM, &promedio);
			printf("%d %s %s %s %f", bol,nombre,AP,AM,promedio);
		}
	}
	fclose(fp);
	system("pause");
}
