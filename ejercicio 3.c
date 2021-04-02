# include <stdio.h>
# include <stdlib.h>
# include <time.h>


int bits(int num[],int Pos)
	{
		int i,j,n,a[10],aux;
		n=num[Pos];
		i=0;
		printf("El numero decimal aleatorio generado es: %d\n",num[Pos]);
	
		while (n > 0) 
		{
			a[i] = n % 2;
			n=n/2;
			i++;
		}
	
		aux=i;
		printf("Convirtiendo el numero decimal a codigo binario quedaria como : ");
	
		for (j=i-1;j>=0;j--)
		{
			printf("%d ",a[j]);
		}

		printf("\nAplicando un led en cada numero del codigo binario siendo 1= ON y 0= OFF, quedaria como : ");
	
		for(i=aux;i>=0;i--)
		{
		
			if(a[i]==0)
			{
			printf("OFF ");
			
			}
			if(a[i]==1)
			{
			printf("ON ");
			}
		}
		
		printf("\n");
		return 0;
	}

int main() 
{
	
	int num[256],i,Pos,S;
	
	srand(time(NULL));
	
	i=0;
	while(i<256){
		num[i]=rand() % 256;
		i++;
	}
	printf("Se ha creado un almacen con 256 numeros decimales aleatorios\n");

while(S=1)
	{
		printf("\n\nIngrese la posicion a analizar [0-255]: ");
		scanf("%d",&Pos);
		bits(num,Pos);
	 }
		
}
