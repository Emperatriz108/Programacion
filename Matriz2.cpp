//Este programa fue hecho por:
//Gema Emperatriz Manzano Machuca
//Carnet: MM18024
//Descripcion: Matrices
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
 
int main(int argc, char** argv) {
	
	int a[5][2]= {{0,0},
				 {1,2},
				 {2,4}};
					 
	for (int i= 0; i<5 ; ++i ){
		for(int j = 0; j<2 ; ++j){
			cout<<"a["<<i<<"]["<<j<<"]";
			cout<<a[i][j]<<endl;
		}
	}
	
	return 0;
}
