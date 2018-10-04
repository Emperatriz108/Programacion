//Este programa fue creado por: Gema Emperatriz Manzano Machuca
//Carnet: MM18024

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

//cuerpo del programa


using namespace std;
int factorial (int n);//Declaracion de funcion

int factorial (int n){


	if (n<0){
		return 0;
	}
	else if (n>1){
	
		return n*factorial (n-1);
	}
return 1;
}

int main (int argc, char *argv[])
{
	int num;
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	cout<<"El factorial de "<<num<<" es: "<<factorial (num)<<endl;
	system("pause");
}

