#include <iostream>

#include <math.h>

#include <conio.h>

using namespace std;

int main(void)
{

int n;
float t, Res;

cout<<"introduce el numero de veces que suena la chicharra"<<endl;

cin>>n;

if (t > 0)

{
t = (n / 4) + 40;
}

cout<<"la temperatura calculada en Farenheit es "<<t<<endl;


	Res=(t-32)/1.8;
	printf("La temperatura en Celcius es de %0.1f grados\n", Res);

_getch();

}