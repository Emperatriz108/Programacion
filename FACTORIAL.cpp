#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int fact=1;

  	cout<<"Ingrese un numero: ";
  	cin>>n;
  		
	if (scanf("%s", &n) ) {//Si el usuario ingresa un dato que no es un numero
		   cout<<"Error! No es un numero!";
		  
 	}
 	else if (n > 0){
 		for(int i = 1;i <= n;i++){
			fact = fact * i;
			
		}
		
	}
	cout<<"El factorial de "<< n << " es: "<< fact <<endl;	 
		 
	return 0; 

}
