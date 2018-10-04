//Universidad de El Salvador
//Facultad Multidisciplinaria Oriental
//Carrera: Ingenieria en Sistemas Informaticos
//Asignatura: Programacion I
//Nombre: Gema Emperatriz Manzano Machuca
//Carnet: MM18024
//Fecha de creacion: 02-10-2018
//Descripcion: Matrizes de forma dinamica

#include <iostream>
#include <conio.h>

using namespace std;


int main(int argc, char** argv) {
	
	int fil,col;
	int matriz[30][30];
	
	cout<<"Ingrese el numero de filas: "; cin>>fil;
	cout<<"Ingrese el numero de columnas "; cin>>col;
	
	for(int i=0; i<fil;i++){
		for(int j=0; j< col ;j++){
			cout<<"Ingrese dato ["<<i<<"] ["<<j<<"]: ";cin>>matriz[i][j];
		}
	}
	
	
	for(int i=0; i<fil;i++){
		for(int j=0; j< col ;j++){
			cout<<matriz[i][j]<<" ";
		}
	cout<<endl;
	}
	
	
return 0;
getch();

}
