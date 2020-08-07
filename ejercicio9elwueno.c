#include<stdio.h>
#include<conio.h>

	int num[3];
	int i, j, actual, aux;
	main()
	{
		pedir();
		ordenar();
		imprimir();
		
		getch();
	}
	
	//Pedir los números 
	pedir()
	{
		for(i=0;i<10;i++)
		{
			printf("\nTeclea un numero: ");
			scanf("%d", &num[i]);
		}
	}
	
	//Ordenamiento de el algoritmo
	ordenar()
	{
		int i, j, aux=0; 
		for (i=0;i<=10-2;i++) 
		{
        	for (j=0;j<=10-2;j++) 
			{
            	if (num[j]>num[j+1]) 
				{
                	aux=num[j];
                	num[j]=num[j + 1];
                	num[j+1]=aux;
            	}
        	}
    	}
	}
	    //Imprimir
    imprimir()
    {
    	for(i=0;i<10;i++)
    	{
    		printf("%d \n",num[i]);
		}
	}
	
	
	
	
	
