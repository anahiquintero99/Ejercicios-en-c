#include<stdio.h>
#include<conio.h>
	void pedir();
	void operacion();
	void imprime();
	
	int num[10];
	int i, y;
	main(){
		printf("*****Valores de Y en funcion a X*****");
		pedir();
		operacion();
		//imprime();
		getch();
	}
	
	//Pide los 10 numeros
	void pedir()
	{
		printf("\n************************************\n************************************\n\n");
		printf("\n*****Ingresar los numeros*****\n\n");
		int indice=0;
		for(i=0;i<10;i++)
		{
			indice=indice+1;
			printf("\n%d. Teclea un numero: ", indice);
			scanf("%d", &num[i]);
		}
		printf("\n************************************\n************************************\n\n");
	}
	//Resuelve la ecuacion
	void operacion(){
		int indice=0;
		for(i=0;i<10;i++){
			indice=indice+1;
			y=(num[i]*5)+97;
			indice=indice+1;
			printf("\nLa ecuacion %d es: %d", indice, y);	
		}
	}
