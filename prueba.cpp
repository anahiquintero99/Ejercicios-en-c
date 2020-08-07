#include<stdio.h>
#include<conio.h>

int main()
{
    int num[10];
    int i;
    for(i=0;i<10;i++)
    {
       printf("\nTeclea la edad: ");
       scanf("%d", &num[i]);
    }
    for(i=0;i<10;i++)
    {
       printf("%d.- %d \n", i, num[i]);
    }
    getch();
}
