#include <stdio.h>
#include <conio.h>
#include <string.h>


//VARIABLES GLOBALES
#define NUM_VECES 50
FILE *fp;
char nombre[60][20],ap[60][20],am[60][20];
int nb[60],c1[20],c2[20],c3[20],c4[20],c5[20];
float prom[60];
int i;

//funciones
void lectura();
void boleta();
void ordenar();
void Boleta_pantalla();
void boleta_archivo();


//PROGRAMA PRINCIPAL
main()
	{
	lectura();
	boleta();
	ordenar();
	getch();
	Boleta_pantalla();
	boleta_archivo();
	}


//PROGRAMA DE LECTUTRA
//Dentro de esta función, deberán leerse los registros y almacenarse los campos en arreglos, el promedio se calcula y también se almacena en un arreglo float. 
//Tomar como base el siguiente programa y sobre él realizar las modificaciones requeridas. 
 
void lectura()
{
	if((fp=fopen("calif.txt","r"))==NULL)
	{
 		printf("NO puedo abrir el archivo...");
	}
	else
	{
		i=0;
 		while(!feof(fp))
		{
	
		fscanf(fp,"%d%s%s%s%d%d%d",&nb[i],nombre[i], ap[i],am[i], &c1[i],&c2[i],&c3[i],c4[i],c5[i]);
		printf("\n%d %s %s %s %d %d %d\n",nb[i],nombre[i], ap[i],am[i], c1[i],c2[i],c3[i],c4[i],c5[i]);
		prom[i]=(c1[i]+c2[i]+c3[i])/5;
		printf("\n\n%f",prom[i]);
		i++;

		}
	
	printf("\n 1) Archivo leído del disco......\n\n");
	}
	
	fclose(fp);
}

//
void boleta()
{
	if((fp=fopen("bol.txt","w"))==NULL)
 	{
 		printf("NO puedo abrir el archivo...");
 	}
 	else
 	{
 		for (i=0;i< NUM_VECES; i++)
 		{
			fprintf(fp,"_________________________________________________\n");
 			fprintf(fp," ipn-upiicsa \n");
 			fprintf(fp," Folio:%d\n",i);
 			fprintf(fp,"Boleta:%d\n",nb[i]);
 			fprintf(fp,"Nombre: %s %s %s\n",
			nombre[i],ap[i],am[i]); // Escritura
 			fprintf(fp,"Materia Calificación\n");
 			fprintf(fp,"Sistemas Digitales %d\n",c1[i]);
 			fprintf(fp,"Comunicacion %d\n",c2[i]);
 			fprintf(fp,"Introduccion a la informatica %d\n",c3[i]);
 			fprintf(fp,"Algebra %d\n",c4[i]);
 			fprintf(fp,"Logica Matematica %d\n",c5[i]);
 			fprintf(fp,"Promedio %2f",prom[i]);
 			fprintf(fp,"Autoriza:AQG.");

			fprintf(fp,"_________________________________________________\n");
			
 		}
 		
		printf("\n");
 		printf("Archivo Grabado......");
 		fclose(fp);
 	}
}


void ordenar()
//Deberán ordenar los datos por el promedio de mayor a menor. No olviden los bloques de movimiento para cada campo. Si tienen 5
//campos, deben tener 5 bloques de intercambios de datos, tengan cuidado al usar el strcpy y la asignación “=”, dependiendo del tipo
//de datos, chequen sus programas anteriores.
{
int j;
	float p;
	char k[20];
	for(j=0;j< NUM_VECES ;j++){
		for(i=0;i<NUM_VECES ;i++){
			if(prom[j]>prom[i]){
				strcpy(k,nombre[j]); strcpy(nombre[j],nombre[i]); strcpy(nombre[i],k);		//Nombre
				strcpy(k,ap[j]); strcpy(ap[j],ap[i]); strcpy(ap[i],k);						//Apellido paterno
				strcpy(k,am[j]); strcpy(am[j],am[i]); strcpy(am[i],k);						//Apellido materno
				p=nb[j]; nb[j]=nb[i]; nb[i]=p;												//Numero de Boleta
				p=c1[j]; c1[j]=c1[i]; c1[i]=p;												//Calif de Sistemas Digitales
				p=c2[j]; c2[j]=c2[i]; c2[i]=p;												//Calif de Comunicacion
				p=c3[j]; c3[j]=c3[i]; c3[i]=p;												//Calif de Introduccion a la informatica
				p=c4[j]; c4[j]=c4[i]; c4[i]=p;												//Calif de Algebra
				p=c5[j]; c5[j]=c5[i]; c5[i]=p;												//Calif de Logica Matematica
				p=prom[j]; prom[j]=prom[i]; prom[i]=p;		
			}
		}
	}
}


void Boleta_pantalla()
//Una vez ordenados los datos por proedio, se imprimirán las boletasa pantallas.
//Adaptar y completar en base al diseño, el código siguiente:
 {

 for (i=0;i< NUM_VECES;i++)
	{ 
		fprintf(fp,"_________________________________________________\n");
 			fprintf(fp," ipn-upiicsa \n");
 			fprintf(fp," Folio:%d\n",i);
 			fprintf(fp,"Boleta:%d\n",nb[i]);
 			fprintf(fp,"Nombre: %s %s %s\n",
			nombre[i],ap[i],am[i]); // Escritura
 			fprintf(fp,"Materia Calificación\n");
 			fprintf(fp,"Sistemas Digitales %d\n",c1[i]);
 			fprintf(fp,"Comunicacion %d\n",c2[i]);
 			fprintf(fp,"Introduccion a la informatica %d\n",c3[i]);
 			fprintf(fp,"Algebra %d\n",c4[i]);
 			fprintf(fp,"Logica Matematica %d\n",c5[i]);
 			fprintf(fp,"Promedio %2f",prom[i]);
 			fprintf(fp,"Autoriza:AQG.");
	}
}
 
void boleta_archivo()
//Las boletas se enviarán a un archivo txt. Utilizar y adaptar la rutina siguiente:
{
	if((fp=fopen("boleta_grabada.txt","w"))==NULL)
	{
	 	printf("NO puedo abrir el archivo...");
 	}
 	else
 	{
 		for (i=0;i< NUM_VECES;i++)
 		{	
			fprintf(fp,"_________________________________________________\n");
 			fprintf(fp," ipn-upiicsa \n");
 			fprintf(fp," Folio:%d\n",i);
 			fprintf(fp,"Boleta:%d\n",nb[i]);
 			fprintf(fp,"Nombre: %s %s %s\n",
			nombre[i],ap[i],am[i]); // Escritura
 			fprintf(fp,"Materia Calificación\n");
 			fprintf(fp,"Sistemas Digitales %d\n",c1[i]);
 			fprintf(fp,"Comunicacion %d\n",c2[i]);
 			fprintf(fp,"Introduccion a la informatica %d\n",c3[i]);
 			fprintf(fp,"Algebra %d\n",c4[i]);
 			fprintf(fp,"Logica Matematica %d\n",c5[i]);
 			fprintf(fp,"Promedio %2f",prom[i]);
 			fprintf(fp,"Autoriza:AQG.");
 		}
 	printf("\n");
 	printf("Archivo Grabado......");
 	fclose(fp);
 	}
 }
