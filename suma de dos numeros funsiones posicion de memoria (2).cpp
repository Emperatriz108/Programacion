//Programa creado por: Gema Emperatriz Manzano Machuca
//Carnet: MM18024
//Descripcion: Sumar dos numeros utilizando funciones y mostrar su posicion en memoria

//librerias a utilizar

#include <iostream> //utilizado para operaciones de entrada y salida de datos.

//cuerpo del programa
using namespace std;

void pedirNumeros(); 

int main (){
	
pedirNumeros();
system ("pause"); //esta en la libreria iostream
return 0;

}

float sumar (float &x, float &y){
	//Posicion en memoria
	cout << "x = "<< &x << endl;
	cout << "y = "<< &y << endl;
	
	return x+y;
}

void pedirNumeros(){	
	float x;
	float y;
	float res;
	
	cout<<"Ingrese un numero"<<endl;
	cin >> x;
	cout<<"Ingrese un numero"<<endl;
	cin >> y;
	res=sumar(x,y);
	
	//Posicion en la memoria
	cout << "x = "<< &x << endl;
	cout << "y = "<< &y << endl;
	
	cout<<"El resultado es: "<<res<<endl;
	
}

