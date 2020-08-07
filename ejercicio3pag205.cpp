#include <stdio.h>
#include <conio.h>
float superficie(float base, float altura)
{
	float sup=0;
	sup=(base*altura)/2;
	return(sup);
}
int main()
{
	float base=0, altura=0;
	printf("Introduce la base:\n");
	scanf("%f",&base);
	printf("Introduce la altura:\n");
	scanf("%f",&altura);
	printf("El valor de la superficie es de: %f",superficie(base,altura));
	getch();
}
