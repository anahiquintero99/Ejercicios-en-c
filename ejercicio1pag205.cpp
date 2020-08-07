#include <stdio.h>
#include <conio.h>
suma(int numero1, int numero2)
{
	int resultado=0;
	resultado=numero1+numero2;
	return (resultado);
}
main()
{
	int num1,num2;
	printf("SUMA CON FUNCIONES\n");
	printf("Introduce el valor 1:\n");
	scanf("%d",&num1);
	printf("Introduce el valor 2:\n");
	scanf("%d",&num2);
	printf("El resultado es: %d",suma(num1,num2));
	getch();
}
