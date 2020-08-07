#include<stdio.h>
int main(){
	int i,m=0,tla=0,tm=0,s=0,ts=0;
	while(i != 2){
		//system("cls");
		printf("\n Hay llamada?\t 1)SI \t 2)NO \n");
		scanf("%d",&i);
		if(i==1){
			tla++;
			printf("Cuanto tiempo duro la llamada(mins)?:\t");
			scanf("%d",&m); printf("segundos?: \t");scanf("%d",&s);
			tm=tm+m; ts=ts+s;
			if (ts >= 60){
        		ts=ts-60;
        		tm=tm+1;}
        		printf("\n El total de llamadas es:\t %d \n El total de minutos es:\t %d.%d \n",tla,tm,ts);
		}
	}
	printf("\n El total de llamadas es:\t %d \n El total de minutos es:\t %d.%d \n",tla,tm,ts); return tla;
}
