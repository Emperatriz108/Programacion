//Universidad de El Salvador
//Facultad Multidisciplinaria Oriental
//Programacion II
//Hecho por: Gema Emperatriz Manzano Machuca
//Fecha de creacion: 17/02/2019
//Objetivo: Escribir una función menorAcero() al que se pasan dos argumentos int por referencia y a 
//continuación fijar el menor de los dos números a 0.

#include <iostream>

using namespace std;

void menorAcero(int &a, int &b);

int main(int argc, char** argv) {
	int num1;
	int num2;
	
	cout<<"Ingrese el valor de num1: ";
	cin>>num1;
	
	cout<<"Ingrese el valor de num2: ";
	cin>>num2;
	
	menorAcero(num1,num2);
	
	cout<<"Valor de num1: "<<num1<<endl;
	cout<<"Valor de num2: "<<num2<<endl;
	return 0;
}

void menorAcero(int &a, int &b)
{
 
 if(a>b){
 	b=0;
 }
 else if(a<b){
 	a=0;
 }
}
