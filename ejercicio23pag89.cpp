#include<stdio.h>
#include<conio.h>


	//Estructura
	struct directorio
	{
		char nombre[30];
		int numero;
	}contacto[20];
	
	main(){
		int n,i,ciclo,acumulador;
		i=0;
		acumulador=0;
		ciclo=1;
		//Pedir
		while(ciclo==1){
			acumulador=acumulador+1;
			printf("\n%d. Ingresa el nombre del contacto: ", acumulador);
			scanf("%s",contacto[i].nombre);
			printf("\n%d. Ingresa el numero del contacto: ", acumulador);
			scanf("%d",&contacto[i].numero);
			printf("\n¿Quieres agregar otro contacto?");
			printf("\n Si teclea= 1\n No teclea= 0 \n");
			scanf("%d", &ciclo);
			i=i+1;
		}
		n=i;
		//Imprime
		acumulador=0;
		for(i=0;i<n;i++){
			acumulador=acumulador+1;
			printf("%d. nombre: %s", acumulador,contacto[i].nombre);
			printf("\n  numero: %d", contacto[i].numero);
			printf("\n******************");
		}
	}
