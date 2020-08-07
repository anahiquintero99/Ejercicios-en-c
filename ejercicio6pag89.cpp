#include <conio.h>
#include <stdio.h>
int main(){ 
 int punto1; 
 int punto2;
 int distancia; 
 printf("dame el punto 1:\n"); 
 scanf("%d",&punto1);
 printf("dame el punto 2:\n"); 
 scanf("%d",&punto2); 
 if(punto1>punto2){
 	distancia = punto1-punto2;
 	printf("La distancia es: %d", distancia);
 }
 else{
 	distancia = punto2-punto1;
 	printf("La distancia es %d unidades:", distancia);
 }
	}
