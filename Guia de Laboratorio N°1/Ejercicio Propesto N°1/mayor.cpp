//Universidad de El Salvador
//Facultad Multidisciplinaria Oriental
//Programacion II
//Hecho por: Gema Emperatriz Manzano Machuca
//Fecha de creacion: 17/02/2019
//Objetivo: Crear un programa que utilize  una función mayor() 
//que intercambie dos valores cuando el primero sea mayor que el segundo.

//Libreias a utilizar
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
//declaracion de la funcion
void mayor(int &a, int &b);

int main() {
	
//declaracion de variables
 int num1;//Primer numero
 int num2;//Segundo numero
 
 cout<<"Ingrese el primer numero: "<<endl;
 cin>>num1;//ingreso del valor del primer numero
 cout<<endl;
 
 cout<<"Ingrese el segundo numero: "<<endl;
 cin>>num2;//ingreso del valor del segundo numero
 cout<<endl;
 
 mayor(num1, num2);//llamada de la funcion
 
 	cout<<"El valor de num1 es: "<<num1<<endl;
 	cout<<"El valor de num2 es: "<<num2<<endl;
 getch();
}

void mayor(int &a, int &b)//acciomes de la funcion
{
 int c;
 //si a > b, a toma el valor de b y b adquiere el valor de a 
 if(a>b){
 	c=a;
 	a=b;
 	b=c;
 
 }
 //si b > a, no cambian de valor
 else if(b>a) {
 	cout<<"Los valores de los numeros no se alteran"<<endl;
 	
 }
}
