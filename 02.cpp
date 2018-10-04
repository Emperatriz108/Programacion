//Universidad de El Salvador
//Facultad Multidisciplinaria Oriental
//Carrera: Ingenieria en Sistemas Informaticos
//Asignatura: Programacion I
//Nombre: Gema Emperatriz Manzano Machuca
//Carnet: MM18024
//Fecha de creacion: 02-10-2018
//Descripcion: Pasar datos de una matriz a otra matriz

#include <iostream>
#include <conio.h>

using namespace std;


int main(int argc, char** argv) {
	
	int fil,col;
	int matriz[30][30];
	int matrizB[30][30];
	
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
	
	//Pasamos de la matriz A a matriz B
	
		
	for(int i=0; i<fil;i++){
		for(int j=0; j< col ;j++){
			
			matrizB[i][j] = matriz[i][j];
			
		}
	}
	
	cout<<"\nMatriz B\n";
	
	for(int i=0; i<fil;i++){
		for(int j=0; j< col ;j++){
			cout<<matrizB[i][j] + 5<<" ";
		}
	cout<<"\n";
	}
	
return 0;
getch();

}
