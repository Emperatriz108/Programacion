//Universidad de El Salvador
//Facultad Multidisciplinaria Oriental
//Programacion II
//Hecho por: Gema Emperatriz Manzano Machuca
//Fecha de creacion: 17/02/2019
//Objetivo: Escribir una función que multiplique un valor por 10 y devuelva el valor modificado.
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void Multiplicar(int a, int b);//declaracion de la funcion

int main(int argc, char** argv) {
	int num;//declaracion de la variable
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;//valor de num
	cout<<endl;
	
	Multiplicar(num, 10);//llamada de la funcion
	
	return 0;
}

//acciones de la funcion
void Multiplicar(int a, int b){
	a = a * b;
	cout<<"El valor modificado: "<<a;
}
