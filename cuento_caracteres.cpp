#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int letra = 0,digit = 0, num = 0, carct = 0, minuscula = 0, carct_space = 0, mayuscula = 0, puntuacion = 0, space = 0,bella = 0;
int a = 0, e=0, i=0, o=0, u=0, control = 0, b = 0, f =0, d = 0, g = 0, r = 0;

int main()
{
	FILE *archivo;
	char caracter;
	
	archivo = fopen ("cuento.txt", "r");
	
	if (archivo == NULL){
		
		printf("\nError de apertura del archivo. \n\n");
	} else{
		
		printf("\nEl contenido del archivo de prueba es \n\n");

		while (feof(archivo) == 0 )
		{
			caracter = fgetc(archivo);
			printf("%c", caracter);

			if (isalpha(caracter))
			{
				letra = letra + 1;
			}
			if (iscntrl(caracter))
			{
				control++;
			}
			
			if (isdigit(caracter))
			{
				digit++;
			}
			
			if (isalnum(caracter))
			{
				num++;
			}
			
			if (isgraph(caracter))
			{
				carct++;
			}
			
			if (islower(caracter))
			{
				minuscula++;
			}
			
			if (isprint(caracter))
			{
				carct_space++;
			}
			
			if (ispunct(caracter))
			{
				puntuacion++;
			}
			
			if (isspace(caracter))
			{
				space++;
			}
			
			if (isupper(caracter))
			{
				mayuscula++;
			}
			
			if ( caracter == 'a')
			{
				a++;
			}
			
			if (caracter == 'e')
			{
				e++;
			}
			
			if (caracter == 'i')
			{
				i++;
			}
			
			if (caracter == 'o')
			{
				o++;
			}
			
			if (caracter == 'u')
			{
				u++;
			}
			if (caracter == 'd')
			{
				d++;	
			}
			if (caracter == 'f')
			{
				f++;	
			}
			if (caracter == 'b')
			{
				b++;	
			}
			if (caracter == 'g')
			{
				g++;	
			}
			if (caracter == 'r')
			{
				r++;	
			}
		}
	printf("\n\n\n 1.-Letras = %d\n 2.-Digitos = %d\n 3.-Alfanumericos = %d\n",letra,digit, num);
	printf(" 4.-Caracteres = %d\n 5.-Minusculas = %d\n 6.-Caracter con espacios = %d\n",carct, minuscula,carct_space);
	printf(" 7.-Puntuacion = %d\n 8.-Espacios = %d\n 9.-Mayuscula = %d\n 10.-A = %d\n", puntuacion, space, mayuscula, a);
	printf(" 11.-E = %d\n 12.-I = %d\n 13.-O = %d\n 14.-U = %d\n 15.-Control = %d\n", e, i, o, u, control);	
	printf(" 16.-B = %d\n 17.-D = %d\n 18.-F = %d\n 19.-G = %d\n 20.-R = %d\n ",b,d,f,g,r);
	}
}
