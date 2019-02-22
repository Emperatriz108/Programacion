#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int Potencia(double n,int p);
int main()
{
double base;
int exp; 
cout<<"Programa para hacer potencias\n";

cout<<"Introduce la base de la potencia: ";
cin>>base;

cout<<"Introduce el exponente de la potencia: ";
cin>>exp;


cout<<"Respuesta: "<<Potencia(base,exp);


return 0;
}

int Potencia(double n,int p){
int sol=1;	
	for (int i=0;i<p;i++)
	{
	sol=sol*n;
	}
return sol;
}
