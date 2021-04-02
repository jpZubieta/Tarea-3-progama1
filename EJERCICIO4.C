#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int tMax(int temp[],int hora[])
{
	
	int i, max=0,clock;
	
	for (i=0;i<24;i++)
	{
			if(temp [i]>max)
			{
			max=temp[i];
			clock=i;
			}
	}
	printf("La Temperatura maxima registrada es de %d grados Celcius, a las ",temp[clock]);
	printf("%d hrs\n",hora[clock]);
	return 0;
}

int tMin(int temp[],int hora[])
{
	
	int i, min=100,clock;
	
	for (i=0;i<24;i++)
	{
		if(temp [i]<min)
			{
			min=temp[i];
			clock=i;
			}
	}
	printf("La Temperatura minima registrada es de %d grados Celcius, a las ",temp[clock]);
	printf("%d hrs\n",hora[clock]);
	return 0;
}

float promedio(int temp [])
{ 
	
	int i;
	float prom,sum=0;
	
	for(i = 0; i < 24; ++i){
		
		sum += temp [i];
		
	}
		prom=sum /24 ;
	printf(" El promedio de la temperatura es de : %0.1f grados Celcius \n",prom);
	
	return prom /24 ;
}
int main() {
	
	int temp[24],i,TempMax,TempMin,hora[24];
	float Promedio;
	
	srand(time(NULL));
	i=0;
	printf("Las 24 temperaturas registradas el dia de hoy fueron:\n\n");
	
	while(i<24)
	{
		temp[i]=rand() % 21 +30; 
		hora[i]=i;
		printf("%d ",temp[i]);
		i++;
	}
	printf("\n\n");
	TempMax=tMax(temp,hora);
	printf("\n");
	TempMin=tMin(temp,hora);
	return 0;
}