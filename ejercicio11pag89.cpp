#include <stdio.h>
#include <conio.h>
	main ()
	{
		float pago, cambio, total_compra;
			printf("Pago del cliente:\n");
			scanf("%f", &pago);
			printf("Cambio del cliente:\n");
			scanf("%f", &cambio);
			total_compra = (pago-cambio);
			printf("Total de compra:\n%.2f pesos", total_compra);
	}
