#include <stdio.h>
#include <conio.h>
main ()
{
	int hour=60, meter=1000, minutes, kilom, distance;
	 printf("Ingresa los minutos recorridos:\n");
	 scanf("%d", &minutes);
	 printf("Ingresa los kilometros recorridos:\n");
	 scanf("%d", &kilom);
	 distance = (minutes * (meter*kilom)) / hour;
	 printf("%d", distance); 
}
