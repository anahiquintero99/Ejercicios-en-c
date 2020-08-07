#include<stdio.h>
#include<conio.h>
	
	void pedir();
	void parnon();
	int num[20];
	int i;
	main()
	{
		pedir();
		parnon();
		getch();
	}
	
	//Pide los 20 numeros
	void pedir(){
		printf("\n************************************\n************************************\n\n");
		printf("\n*****Ingresar los numeros*****\n\n");
		int indice=0;
		for(i=0;i<20;i++)
		{
			indice=indice+1;
			printf("\n%d. Teclea un numero: ", indice);
			scanf("%d", &num[i]);
		}
}
	//Compara si es par o non el numero
	void parnon()
	{
		printf("\n************************************\n************************************\n\n");
		printf("\n*****Numero par o impar*****\n\n");
		int indice=0,par=0,non=0;
		
		for(i=0;i<20;i++){
			indice=indice+1;
			if(num[i]%2==0)
			{
				printf("\n%d. El número %d es par", indice, num[i]);
				par=par+1;
			}
			else{
				printf("\n%d. El numero %d es impar", indice, num[i]);
				non=non+1;
			}
		}
		printf("\n****************************************************");
		printf("\nEl total de numeros pares fueron: %d", par);
		printf("\nEl total de numeros impares fueron: %d", non);		
}
