#include<stdio.h>
#include<conio.h>
#include<math.h>
	
	void pedir();
	void parnon();
	void potencia();
	void primo();
	
	int num[10];
	int i;
	
	main()
	{
		pedir();
		parnon();
		potencia();
		primo();
		getch();
	}
	//Pide los 10 numeros
	void pedir(){
		printf("\n*************\n*************\n\n");
		printf("\n**Ingresar los numeros**\n\n");
		int indice=0;
		for(i=0;i<10;i++)
		{
			indice=indice+1;
			printf("\n%d. Teclea un numero: ", indice);
			scanf("%d", &num[i]);
		}
	}
	//Compara si es par o non el numero
	void parnon(){
		printf("\n*************\n*************\n\n");
		printf("\n**Numero par o impar**\n\n");
		int indice=0;
		for(i=0;i<10;i++){
			indice=indice+1;
			if(num[i]%2==0)
			{
				printf("\n%d. El número %d es par", indice, num[i]);
			}
			else{
				printf("\n%d. El numero %d es impar", indice, num[i]);
			}
		}
	}
	//Cuadrado y potencia de los numeros
	void potencia(){
		printf("\n*************\n*************\n\n");
		printf("\n**Cuadrado y Cubo de los numeros**\n\n");
		int cubo,cuad,indice=0;
		for(i=0;i<10;i++){
			indice=indice+1;
			cuad=pow(num[i],2);
			cubo=pow(num[i],3);
			printf("\n%d. El cuadrado del numero es: %d", indice, cuad);
			printf("\n%d. El cubo del numero es: %d", indice, cubo);
		}
	}
	void primo(){
		printf("\n*************\n*************\n\n");
		printf("\n**Numero primo**\n\n");
		int i,indice=0,j,cont=0;
		
		for(i=0;i<10;i++)
		{
			cont=0;
			indice=indice+1;
			for(j=1;j<=num[i];j++)
			{
				if(num[i]%j==0){
				cont=cont+1;
				}
			}
	
			if(cont>2){
			printf("\n%d.  El numero %d no es primo", indice, num[i]);
			}
			else{
			printf("\n%d.  El numero %d es primo", indice, num[i]);
			}
		}
	}
