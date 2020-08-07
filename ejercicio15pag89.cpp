#include <stdio.h>
	//VARIABLES GLOBALES
	void get_number();
	void calculate_factorial();
	void print_result();

	int factorial = 1;
	int number;
	//PROGRAMA PRINCIPAL
	int main() 
	{
  		get_number();
  		calculate_factorial();
  		print_result();

	 		 return 0;
	}
	//PEDIR NUMERO
	void get_number()
    {
        printf("Ingresa numero:\n");
        scanf("%d", &number);
    }
    // CALCULAR FACTORIAL
	void calculate_factorial()
	{
    	int i;
    	for ( i=1 ; i<=number ; i++)
    	{
        	factorial = factorial * i;
    	}
	}
	//IMPRIMIR FACTORIAL
	void print_result()
	{
    	printf("El factorial de %d es:\n%d", number, factorial);
	}
