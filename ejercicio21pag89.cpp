#include <stdio.h>
	
	// Variables globales
	void get_alumno();
	void print_alumno();
	int i, opc, j;
	
	// Estructura
	struct alumno
	{
		char name[10];
		int edad;
		char genero[2];
		
	}alumnos[200];
	
	// Programa principal
	int main()
	{
		get_alumno();
		print_alumno();
	}
	
	// Ingresa datos
	void get_alumno()
		{
			do
			{
				printf("%i.-Ingresa el nombre del alumno :\n", i+1);
				scanf("%s", alumnos[i].name);
				printf("%i.-Ingresa la edad de alumno :\n", i+1);
				scanf("%d", &alumnos[i].edad);
				printf("%i.-Ingresa el genero de alumno :\n f=femenino o m=masculino\n", i+1);
				scanf("%s", alumnos[i].genero);
				printf("-------------------------------------------------------------\n");
				printf("Deseas agregar otro producto alumno?\n 1.-Si o 2.-No.\n");
				scanf("%d", &opc);
				i++;
			} while (opc==1);
		}
	
	// Imprime alumno
	void print_alumno()
	{
		for ( j = 0; j < i; j++)
			{
				printf("\n\nNumero de alumno: %i\n", j+1 );
				printf("%i Nombre de alumno:%s\n", j+1, alumnos[j].name);
				printf("%i.- edad: %d\n", j+1, alumnos[j].edad);
				printf("%i.- genero: %s\n", j+1, alumnos[j].genero);
				printf("-------------------------------------------------------------");
			}
	}
