#include<stdio.h>
#include<conio.h>
	main(){
		int ninos=0,personas=0, ciclo=1;
		int edad;
		
		while(ciclo==1){
			printf("\nIngresa la edad del visitante: ");
			scanf("%d", &edad);
			if(edad>10)
			{
				personas=personas+1;
			}
			else{
				ninos=ninos+1;
			}
			printf("\n¿Quieres agregar otro visitante?");
			printf("\n Si teclea= 1\n No teclea= 0 \n");
			scanf("%d", &ciclo);
		}
		printf("Los niños menores de 10 son: %d", ninos);
	}
	
