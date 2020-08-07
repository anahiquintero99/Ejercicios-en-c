#include <stdio.h>

	// VARIABLES GLOBALES
	void get_items();
	void print_items();
	int i = 0;
	int j = 0;
	int opc = 1;
	
	// Estructuras
	struct item
	{
		char name[50];
		int num;
	}items[200];
		
	
	 // PROGRAMA PPRINCIPAL
	int main()
	{
		get_items();
		print_items();
		
	}
	
	
	// PROGRAMA PEDIR
	void get_items()
	{
		do
		{
			printf("%i.-Ingresa el articulo :\n", i+1);
			scanf("%s", items[i].name);
			printf("Ingresa la cantidad del articulo:\n");
			scanf("%d", &items[i].num);
			printf("Deseas agregar otro articulo?\n 1.-Si o 2.-No.\n");
			scanf("%d", &opc);
			i++;
		} while (opc==1);
	}
	
	
	// Imprimir articulos
	void print_items()
	{
		printf("---------------------------------------------");
		printf("\nnombre \t\t | total\n");
		printf("---------------------------------------------");
		for (j = 0; j < i; j++)
		{
			printf("\n%s \t\t | %d\n", items[j].name, items[j].num);
		}
	}
	
