//Universidad de El Salvador
//Facultad Multidisciplinaria Oriental
//Programacion II
//Hecho por: Gema Emperatriz Manzano Machuca
//Fecha de creacion: 15/02/2019
//Objetivo: Crear un programa que imprima una cadena de caracteres al inverso utilizando punteros.

/////////////////////////////////////////////////////////////////////////////////////////////////////

//declaracio de libreria
#include <iostream>
#include <cstdlib>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

//Funcion para contar letras
int longitud(char *cadena){
	char *ptr = cadena;
	while(ptr[0]!='\0')//mientras la posicion no este vacia
	
		ptr++;
	
	return (int)(ptr-cadena);
}

int main(int argc, char** argv) {
	
	char *letra ="chocolate";
	int n=longitud(letra);
	
	
	cout<<"Palabra: "<<letra<<endl;
	cout<<"Palabra al inverso: ";
	for(int i=n; i>=0;i--){
		cout<<letra[i];
	}
	
	
	return 0;
}
