//Universidad de El Salvador
//Facultad Multidisciplinaria Oriental
//Nombre: Gema Emperatriz Manzano Machuca 
//Carnet: MM18024
//Fecha de creacion: 21-09-2018
//Fecha de madificacion: 25-09-2018
//Este programa consiste en calcular el total a pagar que el usuario por las llamadas realizadas
//Librerias a utilizar

#include <iostream>//Para operaciones de entrada/salida
#include <stdlib.h> //Esta libreria se utilizo para system("pause")
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;



int main(int argc, char** argv) {
	
	int n;//Variable de entrada. Para la cantidad de llamadas.
	float s;//Variable para la suma de todos los costos de las llamadas. 
	float pagar[3];//Arreglo para 3 espacios. Aqui se establecen los datos segun para cada intervalo.
	 pagar[0]=0.05;//Dato en la posicion 0
	 pagar[1]=0.08;//Dato en la posicion 1
	 pagar[2]=0.10;//Dato en la posicion 2
	
	//Se le pide al usuario la cantidad de llamadas que esta representada por la variable "n".
	cout<<"Ingresar la cantidad de llamadas que realizo: ";
	cin>>n;
	cout<<endl;
	
	if(n<0){
		cout<<"Es menor"<<endl;
	}
	else{
		cout<<"Es mayor"<<endl;	
		}
	
	return 0;
}
	
	
	
	
	
	
	
	
	
