#include <stdio.h>

	// Variables globales
	float pounds = 2.20462;
	float feet = 3.28084;
	float result;
	float result2;
	float meter;
	float kilo;
	void get_num();	
	void calculate();
	void print_result();
		
	// Programa principal
 	int main ()
	 	{
			get_num();
			calculate();
			print_result();
		}
		
	// Ingresar numeros	
	void get_num()
	{
		printf("Kilogramos:\n");
		scanf("%f", &kilo);
		printf("Metros:\n");
		scanf("%f", &meter);
	}
	
	// Calcular 
	void calculate()
	{
		result = kilo * pounds;
		result2 = meter * feet;
	}
	
	// Imprime resultado
	void print_result()
	{
		printf(" %.5f kilosgramos = %.5f libras\n", kilo, result);
		printf(" %.5f metros = %.5f pies", meter, result2);
	}
	
