#include <stdio.h>
#include <conio.h>
int cuenta (int numeros[10])
{
	int total=0,i;
	for(i=1;i<=10;i++)
	{
		if (numeros[i]==0)
		total+=1;
	}
	return (total);
}
int main()
{
	int i;
	int valor[10];
	for(i=1;i<=10;i++)
	{
		printf("Introduce el valor %d:",i);	
		scanf("%d",&valor[i]);
	}
	printf("La cantidad de cero es de: %d",cuenta(valor));
	getch();
}
