#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define total_ventas 200
		//VARIABLES GLOBALES
		void get_product();
		void get_day();
		void print_product();
		char date[10];
		int i, j;
		int opc;
		 
		struct product
		{
			char name[30];
		}products [total_ventas];
		
		//PROGRAMA PRINCIPAL
		int main()
		{
			get_day();
			get_product();
			print_product();	
			
				return 0;
		}
		//Ingresa dia
		void get_day()
		{
			printf("Ingresa la fecha:\n");
			scanf("%s", date);
			printf("-------------------------------------------------------------\n");
		}
		//Ingresa producto lateo
		void get_product()
		{
		do
		{
			printf("%i.-Ingresa el articulo :\n", i+1);
			scanf("%s", products[i].name);
			printf("-------------------------------------------------------------\n");
			printf("Deseas agregar otro producto lacteo?\n 1.-Si o 2.-No.\n");
			scanf("%d", &opc);
			i++;
		} while (opc==1);
		}
		//Imprime lacteo
		void print_product()
		{
			printf("\n\nEn el dia de %s se realizaron estas ventas de lacteos:\n", date);
			for ( j = 0; j < i; j++)
			{
				printf("\n\nNumero de venta: %i\n", j+1 );
				printf("%i.- La marca del lacteo es: %s\n", j+1, products[j].name);
				printf("-------------------------------------------------------------");
			}
		}
