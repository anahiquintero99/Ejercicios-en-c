#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int letra = 0,digit = 0, num = 0, carct = 0, minuscula = 0, carct_space = 0, mayuscula = 0, puntuacion = 0, space = 0,bella = 0;
int a = 0, e=0, ii=0, o=0, u=0, control = 0, b = 0, f =0, d = 0, g = 0, r = 0;
char text[255], caracter;
int i=0;

int main(void)
{

  printf("text: ");
  gets(text);

		while (text[i] != '\0' )
		{
			caracter = text[i];
			printf("%c", caracter);
			
			i++;

			if (isalpha(caracter))
			{
				letra++;
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
				ii++;
			}
			
			if (caracter == 'o')
			{
				o++;
			}
			
			if (caracter == 'u')
			{
				u++;
			}
     	}
	printf("\n\n\n 1.-Letras = %d\n 2.-Digitos = %d\n 3.-Alfanumericos = %d\n",letra,digit, num);
	printf(" 4.-Caracteres = %d\n 5.-Minusculas = %d\n 6.-Caracter con espacios = %d\n",carct, minuscula,carct_space);
	printf(" 7.-Puntuacion = %d\n 8.-Espacios = %d\n 9.-Mayuscula = %d\n 10.-A = %d\n", puntuacion, space, mayuscula, a);
	printf(" 11.-E = %d\n 12.-I = %d\n 13.-O = %d\n 14.-U = %d\n 15.-Control = %d\n", e, i, o, u, control);	
}

