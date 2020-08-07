#include <stdio.h>
#include <conio.h>
void promedio(float calificacion[5],int matricula)
{
	int i;
	float suma=0, prome=0;
	for(i=1;i<=5;i++)
	{
		suma=suma+calificacion[i];
	}
	prome=suma/5;
	printf("El estudiante con matricula %d tiene promedio de: %f",matricula,prome);
}
int main()
{
	int matricula=0,i;
	float calificacion[5];
	printf("Introduce tu matricula");
	scanf("%d",&matricula);
	for(i=1;i<=5;i++)
	{
		printf("Introduce tu calificacion %d:",i);
		scanf("%f",&calificacion[i]);
	}
	promedio (calificacion,matricula);
	getch();
}
