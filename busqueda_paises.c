#include <stdio.h>
#include <conio.h>
#include <string.h> 
  FILE *esc; 
  FILE *fp; 
char nombrep[50][20],app[50][20],amp[50][20]; //p = presidente
char idioma[50][20], gentilicio[50][20], pais[50][20],capital[50][20];
int estado[50], poblacion[50], nb[50];
int i;
 
int main()
{  
 lectura();  
 imprimir(); 
 busqueda(); 
} 

int lectura()
{ 
   if((fp=fopen("paises.txt","r"))==NULL){  
   printf("NO puedo abrir el archivo...");  
	} 
   else {   
   i=0;   
   while(!feof(fp)){   
    fscanf(fp,"%d%s%s%s%s%d%d%s%s%s",&nb[i],&pais[i],nombrep[i],app[i],amp[i],&poblacion[i],&estado[i],&idioma[i],&gentilicio[i],&capital[i]); 
	  i++;   
		} 
	} 
	    fclose(fp);  
	    
} 

int imprimir()
{ 
	int j;  
	float p;  
	char k[20]; 
	   for(j=0;j<50;j++){  
			for(i=0;i<50;i++){   
	    		if(nb[j] < nb[i]){
				strcpy(k,pais[j]); strcpy(pais[j],pais[i]);strcpy(pais[i],k);
				strcpy(k,nombrep[j]); strcpy(nombrep[j],nombrep[i]); strcpy(nombrep[i],k);	
				strcpy(k,app[j]); strcpy(app[j],app[i]); strcpy(app[i],k);					
				strcpy(k,amp[j]); strcpy(amp[j],amp[i]); strcpy(amp[i],k);
				strcpy(k,idioma[j]); strcpy(idioma[j],idioma[i]);strcpy(idioma[i],k);					
				strcpy(k,gentilicio[j]); strcpy(gentilicio[j],gentilicio[i]);strcpy(gentilicio[i],k);
				strcpy(k,capital[j]); strcpy(capital[j],capital[i]);strcpy(capital[i],k);
				p=nb[j]; nb[j]=nb[i]; nb[i]=p;											
				p=poblacion[j]; poblacion[j]=poblacion[i]; poblacion[i]=p;				
				p=estado[j]; estado[j]=estado[i]; estado[i]=p;	
			}
		} 
	}
}


int busqueda()
{ 
   int rem;  
   int v=0;  
   printf("Ingresa el numero de Boleta:\t");  
   scanf("%d",&rem);  
   for(i=0;i<50,v=1;i++)
   {   
	   if(rem==nb[i])
	   {   
		    printf("\n\n Boleta:\n\n\n");    
			printf("\t\t\t\t IPN\n\t\t\t\tUPIICSA\n");
			printf("\t\t\t\t\t\t\t\tFOLIO: %d\n\n",i);
			printf("\t Nombre del Pais: %s  \t BOLETA:  %d\n", pais[i],nb[i]);
			printf("\t INFORMACION SOBRE EL PAIS \n\n");
			printf("\t Nombre del Presidente             %s %s %s \n", nombrep[i],app[i],amp[i]);
			printf("\t Poblacion                         %d millones de habitantes\n",poblacion[i]);
			printf("\t Estados                           %d estados\n",estado[i]);
			printf("\t Idioma                            %s\n",idioma[i]);
			printf("\t Gentilicio                        %s\n",gentilicio[i]);
			printf("\t Capital:                          %s\n",capital[i]);
			printf("__________________________________________________________________________________\n\n"); 
			i=50;v=1;
		}
	}
	if(v!=1)
	{  
		printf("Boleta no encontrada...");   
	}
}
 
