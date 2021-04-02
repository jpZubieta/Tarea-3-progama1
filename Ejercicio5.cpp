// Programa C ++ para encontrar media, mediana, varianza y desviación estándar
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>

using namespace std;
// Función para calcular media, mediana, varianza y desviación estándar
int mathematicalOperation (int arr[],int n){
double median, variance, SD;
// sort the array
sort (arr,arr+n);
// si la matriz tiene un número par de elementos

if (n%2!=0)
median=(double)arr[n/2];
// si la matriz tiene un número de elementos
else
median=(double)(arr[(n-1)/2] + arr[n/2])/2.0;
int sum=0;
// calcula la suma de los elementos de la matriz
for (int i=0; i<n;i++)
sum +=arr[i];

// calcular la media
double mean = (double)sum/(double)n;
double sqDiff=0;
// calcular la diferencia cuadrada
for(int i = 0; i<n; i++)
sqDiff +=(arr[i]-mean)*(arr[i]-mean);
// calcular la varianza
variance=sqDiff/n;
// calcular la desviación estándar
SD = sqrt(variance);
// imprime el resultado
cout <<"Media:"<<mean<<endl<<"mediana:"<<median<<endl<<"Varianza:"<<variance<<endl<<"Estandar Desviacion:"<<SD<<endl;
}

// Función de controlador
int main () {
int n;
// solicitar el valor de N
cout << "Introduzca el valor de N:";
cin >>n;
int array[n];
cout << "Introduzca los elementos de la matriz uno por uno\n";
// acepta los elementos de la matriz
for(int i =0;i<n;i++){
cin >> array [i];
}
//Llamada de función
mathematicalOperation(array,n);
system("PAUSE");
return 0;

}
