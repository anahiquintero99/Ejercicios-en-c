#include <stdio.h>
#include <string.h>
#include <conio.h>

// DECLARACIÓN DE FUNCIONES
void lectura();
void ordenamiento();
void convertir();
void impresion();
void cheque();
void formatear_espacios(int veces);
void formatear_simbolo(char simbolo, int veces);


// VARIABLES GLOBALES
#define NUM_VECES 50
char fechas[NUM_VECES][12], nombres[NUM_VECES][30], APs[NUM_VECES][30], AMs[NUM_VECES][30];
int cantidades[NUM_VECES], folios[NUM_VECES], contador_veces = 0;

// Variables Convertir
int numero, n;
char Cadena[200]; // se declaran como globales
char Auxiliar[200]; // se declaran como globales

// Variables Lectura
FILE *fp;

// Variable para el for de cheque y convertir
int iGlobal;


// ENTRADA DEL SISTEMA
main()
{ 
  lectura();
  ordenamiento();
  impresion();
  cheque();
  getch();
}

void lectura()
{
  if((fp=fopen("cheques.txt","r")) == NULL)
  {
    printf("NO puedo abrir el archivo...");
  }
  else	
  {
    while(!feof(fp))
    {
      fscanf(fp,"%s%s%s%s%d%d", fechas[contador_veces], nombres[contador_veces], APs[contador_veces], AMs[contador_veces], &cantidades[contador_veces], &folios[contador_veces]);
      printf("%s %s %s %s %d %d\n", fechas[contador_veces], nombres[contador_veces], APs[contador_veces], AMs[contador_veces], cantidades[contador_veces], folios[contador_veces]);

      contador_veces++;
    }

    printf("\n");
    printf("Archivo leído......");
  }

  fclose(fp);
}

void ordenamiento()
{
  int j, i;

  for (j = 0; j < NUM_VECES; j++) {
    for (i = 0; i < NUM_VECES - 1; i++) {
      if (cantidades[i] > cantidades[i+1]) {
        int auxCantidad = cantidades[i+1];
        cantidades[i+1] = cantidades[i];
        cantidades[i] = auxCantidad;

        int auxFolio = folios[i+1];
        folios[i+1] = folios[i];
        folios[i] = auxFolio;

        char auxFecha[12];
        strcpy(auxFecha, fechas[i+1]);
				strcpy(fechas[i+1], fechas[i]);
				strcpy(fechas[i], auxFecha);

        char auxNombres[30];
        strcpy(auxNombres, nombres[i+1]);
				strcpy(nombres[i+1], nombres[i]);
				strcpy(nombres[i], auxNombres);

        char auxAPs[30];
        strcpy(auxAPs, APs[i+1]);
				strcpy(APs[i+1], APs[i]);
				strcpy(APs[i], auxAPs);

        char auxAMs[30];
        strcpy(auxAMs, AMs[i+1]);
				strcpy(AMs[i+1], AMs[i]);
				strcpy(AMs[i], auxAMs);
      }
    }
  }
}

void impresion() {
  int i;
  printf("\n____________________________________\n");
  for (i = 0; i < NUM_VECES; i++) {
    printf("%s %s %s %s %d %d\n", fechas[i], nombres[i], APs[i], AMs[i], cantidades[i], folios[i]);
  }
  printf("\n____________________________________\n");
}

void cheque() {
  for (iGlobal = 0; iGlobal < NUM_VECES; iGlobal++) {
    convertir();
    printf("\n__________________________________________________________________\n");
    printf("                     BANCO UPIICSA \n");
    printf("\n\n                                       Folio: %d \n", folios[iGlobal]);
    printf("\n                                       Fecha: %s \n", fechas[iGlobal]);
    printf("\nPagar a nombre de: %s %s %s la cantidad \nde $ %d  (%s pesos)", nombres[iGlobal], APs[iGlobal], AMs[iGlobal], cantidades[iGlobal], Cadena);
    printf("\n\n                         Autorizado: Anahi Quintero Granados \n");
    printf("\n__________________________________________________________________\n");
  }
}

//Todo esto queda igual
void convertir()
{
  int unidad = 0;
  int decena = 0;

  Cadena[0] = '\0'; // \0 -> Caracter vacío
  numero = cantidades[iGlobal]; // Se asigna el valor de cantidad a numero; 
  unidad = numero % 10; // 12 % 10 -> 2
  decena = numero / 10; // 12 / 10 -> 1

  // Comprobar las decenas para crear la cadena que
  // devuelve el texto correspondiente al numero
  // Decenas
  switch(decena)
  {
    case 1:
      strcpy(Cadena, "diez");
      break;
    case 2:
      strcpy(Cadena, "veinte");
      break;
    case 3:
      strcpy(Cadena, "treinta");
      break;
    case 4:
      strcpy(Cadena, "cuarenta");
      break;
    case 5:
      strcpy(Cadena, "cincuenta");
      break;
    case 6:
      strcpy(Cadena, "sesenta");
      break;
    case 7:
      strcpy(Cadena, "setenta");
      break;
    case 8:
      strcpy(Cadena, "ochenta");
      break;
    case 9:
      strcpy(Cadena, "noventa");
      break;
    case 10:
      strcpy(Cadena, "Cien");
      break;
  }

  // Unidades
  // el problema con las unidades ocurre porque no cumplen una
  // regla fija hasta el numero treinta y por lo tanto hay que evaluar
  // las decenas para saber a que número corresponden
  if (decena == 0 || decena == 2) {
    switch(unidad)
    {
      case 0:
        strcpy(Cadena,"cero");
        break;
      case 1:
        strcpy(Cadena,"uno");
        break;
      case 2:
        strcpy(Cadena,"dos");
        break;
      case 3:
        strcpy(Cadena,"tres");
        break;
      case 4:
        strcpy(Cadena,"cuatro");
        break;
      case 5:
        strcpy(Cadena,"cinco");
        break;
      case 6:
        strcpy(Cadena,"seis");
        break;
      case 7:
        strcpy(Cadena,"siete");
        break;
      case 8:
        strcpy(Cadena,"ocho");
        break;
      case 9:
        strcpy(Cadena,"nueve");
    }
  }

  if (decena == 1) {
    switch(unidad)
    {
      case 0:
        strcpy(Cadena,"diez");
        break;
      case 1:
        strcpy(Cadena,"once");
        break;
      case 2:
        strcpy(Cadena,"doce");
        break;
      case 3:
        strcpy(Cadena,"trece");
        break;
      case 4:
        strcpy(Cadena,"catorce");
        break;
      case 5:
        strcpy(Cadena,"quince");
        break;
      case 6:
        strcpy(Cadena,"dieciseis");
        break;
      case 7:
        strcpy(Cadena,"diecisiete");
        break;
      case 8:
        strcpy(Cadena,"dieciocho");
        break;
      case 9:
        strcpy(Cadena,"diecinueve");
    }
  }

  // si se trata de los numeros entre el 20 y 29
  if(decena==2) {
    if (unidad==0)
    {
      strcpy(Cadena,"veinte");
    }
    else
    {
      strcpy(Auxiliar,"veinti");
      strcat(Auxiliar,Cadena);
      strcpy(Cadena,Auxiliar);
    }
  }

  // numeros superiores a 29
  if(decena>2 && decena<10 && unidad!=0) {
    strcat(Cadena," y ");
    switch(unidad)
    {
      case 1:
        strcat(Cadena,"uno");
        break;
      case 2:
        strcat(Cadena,"dos");
        break;
      case 3:
        strcat(Cadena,"tres");
        break;
      case 4:
        strcat(Cadena,"cuatro");
        break;
      case 5:
        strcat(Cadena,"cinco");
        break;
      case 6:
        strcat(Cadena,"seis");
        break;
      case 7:
        strcat(Cadena,"siete");
        break;
      case 8:
        strcat(Cadena,"ocho");
        break;
      case 9:
        strcat(Cadena,"nueve");
        break;
    }
  }
}

