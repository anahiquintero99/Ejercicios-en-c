#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define total_ventas 60
		//VARIABLES GLOBALES
		void get_model();
		void get_month();
		void imprimir_model();
		char mes[10];
		int i;
		 
		//Estructura
		struct carro
		{
			char marca[30];
			char model[30];
		}carros[total_ventas];
		
		//PROGRAMA PRINCIPAL
		int main()
		{
			get_month();
			get_model();
			imprimir_model();	
			
				return 0;
		}
		//Ingresa mes
		void get_month()
		{
			printf("Ingresa el mes:\n");
			scanf("%s", mes);
		}
		//Ingresa modelo y marca
		void get_model()
		{
			for ( i = 0 ; i < total_ventas; i++)
			{
				printf("\n\n%i Ingresa marca del carro:\n", i+1);
				scanf("%s", carros[i].marca);
				printf("\n%i Ingresa modelo:\n", i+1);
				scanf("%s", carros[i].model);
			}
		}
		//Imprime modelo y marca
		void imprimir_model()
		{
			printf("\n\nEn el mes de %s se realizaron estas ventas\n", mes);
			for ( i = 0 ; i < total_ventas; i++)
			{
				printf("\n\nNumero de venta: %i\n", i+1 );
				printf("%i.- La marca del carro es: %s\n", i+1, carros[i].marca);
				printf("%i.- El modelo del carro es: %s\n", i+1, carros[i].model);
			}
		}
