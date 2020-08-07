#include <stdio.h>
#include <conio.h>

void captura();
void grabar();
FILE *fp;
char clave[20][20], nombre[20][20];
int poblacion[20],i;
main()
{
captura();
grabar();
getch();
}
// Captura de datos
void captura()
{
 for (i=0;i<5;i++)
 {

 printf("Clave del Estado:");
 scanf("%s",clave[i]);
 printf("\n nombre:");
 scanf("%s",nombre[i]);
 printf("\n Población:");
 scanf("%d", &poblacion[i]);

 }
}
void grabar()
{

 if((fp=fopen("estados.txt","w"))==NULL)
 {
 printf("NO puedo abrir el archivo...");
 }
 else
 {
 for (i=0;i<5;i++)
 {
 fprintf(fp,"%s %s %d\n",
clave[i],nombre[i],poblacion[i]); // Escritura

 }
 printf("\n");
 printf("Archivo Grabado......");
 fclose(fp);
 }


}
