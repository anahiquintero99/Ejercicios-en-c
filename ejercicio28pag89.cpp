#include<stdio.h>
#include<conio.h>
#include<math.h>
	
	int menu;
	float b,h,a,vol;
	void pedir();
	main()
	{
		//Programa principal
		pedir();
		getch();
	}
	
	//Pedir
	void pedir(){
		printf("Ingresa del menu, la superficie que quieras calcular:\n");
		printf(" 1. Triangulo \n 2. Circulo \n 3. Cuadrado \n 4. Hexagono \n 5. Volumende un cilindro\n");
		scanf("%d", &menu);
		switch(menu)
		{
			case 1: 
			
				triangulo();
				break;
			
			case 2:
			
				circulo();
			
			case 3:
			
				cuadrado();
			
			case 4:
			
				hexagono();
			
			case 5:
			
				cilindro();
			
			default:
				printf("Error, ingrese un numero del menu");
				break;
			
		}
	}
	
	//triangulo
	triangulo(){
		printf("Ingresa la base del triangulo:");
		scanf("%f", &b);
		printf("Ingresa la altura del triangulo: ");
		scanf("%f", &h);
		a=(b*h)/2;
		printf("La superficie es: %f", a);
	}
	
	//cuadrado
	cuadrado(){
		printf("Ingresa un lado del cuadrado:");
		scanf("%f", &b);
		a=b*b;
		printf("La superficie es: %f", a);	
	}
	
	//circulo
	circulo(){
		float pi=3.1416;
		printf("Ingresa el radio del circulo:");
		scanf("%f", &b);
		a=pow(pi,2)*b;
		printf("La superficie es: %f", a);	
	}
	
	//hexagono
	hexagono(){
	float per;
	printf("Ingrese un lado del hexagono: ");
	scanf("%f",&b);
	per=b*6;
	printf("Ingrese el apotema del hexagono: ");
	scanf("%f",&h);
	a=(b*h)/2;
	printf("La superficie es: %f", a);
	}
	
	//volumene de un cilindro
	cilindro(){
		float pi=3.1416;
		printf("Ingresa el radio del cilindro:");
		scanf("%f", &b);
		printf("Ingresa la altura del radio: ");
		scanf("%f", &h);
		a=pow(pi,2)*b;
		vol=a*h;
		printf("La superficie es: %f", vol);
	}
