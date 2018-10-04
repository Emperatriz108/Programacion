//Programa creado por: Gema Emperatriz Manzano Machuca
//Carnet: MM18024

//librerias a utilizar
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

//cuerpo del programa
using namespace std;

int main (int argc, char *argv[]){

	int mat [5][5]; //declaramos una matriz
	int mat2 [5][5];
	int mat3 [5][5];
	
	//ciclo, contador,termial, incremento 
	for (int fila = 0; fila<5; fila++){ //ciclo for
		for (int col=0; col<5; col++){
			mat [fila][col] = 0;	
			
			if(fila == 4 || col == 2){
			mat2 [fila][2] = 0;
			mat2 [4][col] = 0;			
			}

			else{
				
			mat2[fila][col] = 1;
			}
			
			
			mat3 [fila][col] = mat [fila][col] + mat2 [fila][col];
					
		}
		
	}

	for (int fila = 0; fila<5; fila++){ //ciclo for
		for (int col=0; col<5; col++){
			cout<<mat3[fila][col]<<"\t";
		}		
		cout<<endl;
	}
system("pause");
return EXIT_SUCCESS;

}
