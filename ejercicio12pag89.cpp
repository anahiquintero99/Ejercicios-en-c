#include <stdio.h>
	
	// Programa principal
	int main()
	{
		int opc;
		float num;
		float num2;
		float result;
	
		do
		{
			printf("\n--------Menu-------\n");
			printf("1.-Suma\n");
			printf("2.-Resta\n");
			printf("3.-Multiplicacion\n");
			printf("4.-Division\n");
			printf("5.-Salir\n");
			printf("Elije una opcion\n");
			scanf("%d", &opc);
			
			printf("Ingresa numero:\n");
			scanf("%f", &num);
			printf("Ingresa otro numero:\n");
			scanf("%f", &num2);
						
			switch (opc)
			{
				case 1: result = num + num2;
				printf("El resultado de la suma es:\n %.2f", result);
				break;
				case 2: result = num - num2;
				printf("El resultado de la resta es:\n %.2f", result);
				break;
				case 3: result = num * num2;
				printf("El resultado de la multiplicacion es:\n %.2f", result);
				break;
				case 4: result = num / num2;
				printf("El resultado de la division es:\n %.2f", result);
				break;
			}
		} while ( opc != 5);
			
		return 0;
	}
	
	
