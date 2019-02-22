#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int menu ();
int Cuadrado(int l);
int Cubo(int l);

int main()
{
int op;
int lad;

menu ();
cin>>op;

switch (op)
	{
		case 1: 
		
		cout<<"Ingrese el valor del lado (m): ";
		cin>>lad;
		cout<<"Area del cuadrado: "<<Cuadrado(lad)<<" m^2 ";
	
		break ;
				
	 	case 2 :
	 		cout<<"Ingrese el valor del lado (m): ";
			cin>>lad;
			cout<<"Volumen del cubo: "<<Cubo(lad)<<" m^3 ";
		break;
		
		case 3:
			return 0;
		
	}
return 0;
}

int menu ()
{
	cout<<"MENU"<<endl;
	cout<<"1. Area del cuadrado"<<endl;
	cout<<"2. Volumen del cubo"<<endl;
	cout<<"3. Salir"<<endl;
	system ("color b1")	; //color	
}

int Cuadrado(int l){
int sol=1;	
	for (int i=0;i<2;i++)
	{
	sol=sol*l;
	}
return sol;
}

int Cubo(int l){
int sol=1;	
	for (int i=0;i<3;i++)
	{
	sol=sol*l;
	}
return sol;
}
