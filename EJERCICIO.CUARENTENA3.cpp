#include <stdio.h>
#include <conio.h>
void grabar();
main()
{
grabar();
getch();
}
// grabar un archivo 
void grabar()
{
 FILE *fp;
 char clave[20], nombre[20];
 int poblacion,i;


 if((fp=fopen("estados.txt","w"))==NULL)
 {
 printf("NO puedo abrir el archivo...");
 }
 else
 {
 for (i=0;i<1;i++)
 {

 printf("Clave del Estado:");
 scanf("%s",clave);
 printf("\n nombre:");
 scanf("%s",nombre);
 printf("\n Población:");
 scanf("%d", &poblacion);
 fprintf(fp,"%s %s %d\n",
 clave,nombre,poblacion); // Escritura
 }
 printf("\n");
 printf("Archivo Grabado......");
 fclose(fp);
 }


}
