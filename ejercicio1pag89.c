#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	float x1, x2, a, b, c;
	printf("Ingresa valor a:\n");
  		scanf("%f", &a);
	printf("Ingresa valor b:\n");
		scanf("%f", &b);
	printf("Ingresa valor c:\n");
		scanf("%f", &c);
	x1=((b*-1) + sqrt(b*b-4*a*c)) / (2*a);
	x2=((b*-1) - sqrt(b*b-4*a*c)) / (2*a);
	printf("El resultado para x1 es: %f\n", x1);
	printf("El resultado para x2 es: %f\n", x2);
}

