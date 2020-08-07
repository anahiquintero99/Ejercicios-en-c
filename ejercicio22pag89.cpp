#include <stdio.h>
#include <math.h>
#include <conio.h>
	
	// Variables globales
	void get_product();
	void print_product();
	float total_price;
	int i, j, opc;
	
	
	// Estructura
	struct product
	{
		char name[30];
		float price;
	} products[200];
	
	// Programa principal
	main()
	{
		get_product();
		print_product();
	}
	
	//Ingresa producto
	void get_product()
	{
		do
		{
			printf("%i.-Ingresa el nombre el artculo :\n", i+1);
			scanf("%s", products[i].name);
			printf("%i.-Ingresa el precio en dolares:\n", i+1);
			scanf("%f", &products[i].price);
			total_price = total_price + products[i].price;
			printf("-------------------------------------------------------------\n");
			printf("Deseas agregar otro articulo alumno?\n 1.-Si o 2.-No.\n");
			scanf("%d", &opc);
			i++;
		} while (opc==1);
	}
	
	// Imprime producto
	void print_product()
	{
		for ( j = 0; j < i; j++)
			{
				printf("\n\nNumero de producto: %i\n", j+1 );
				printf("%i Nombre del producto:%s\n", j+1, products[j].name);
				printf("%i.- Precio en dolares: %.2f\n", j+1, products[j].price);
				printf("-------------------------------------------------------------");
			}
		printf("\n%i.- Total: %.2f\n", j+1, total_price);	
	}
