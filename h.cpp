//Este programa fue hecho por: Gema Emperatriz Manzano Machuca
//Carnet: MM18024
//Este programa genera valores aleartorios en la matriz
#include <iostream>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int matriz[3][3];
	
	srand(time(NULL));
	
	for (int i =0;i<3;i++){
		for (int j =0;j<3;j++){
			
			matriz[i][j] = rand() % 101;
		}
	}
	
	
	for (int i =0;i<3;i++){
		for (int j =0;j<3;j++){
		
			cout<<matriz[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
