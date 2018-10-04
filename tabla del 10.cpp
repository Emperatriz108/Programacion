//Programa creado por: 	Gema Emperatriz Manzano Machuca 
//Carnet: MM18024
//Descripcion: Un programa que muestre la tabla del 10

//librerias a utilizar
#include <iostream> //utilizado para operaciones de entrada y salida de datos.
#include <windows.h>

//cuerpo del programa
using namespace std;

int main (int argc, char *argv[])
{

//Declaracion de variables
int i=10;
int j;

cout<<("La tabla del 10 es:  ")<<endl;
 	
for (int j=1;j<=10;j++){				

	cout<<i<<"x"<<j<<"="<<i*j<<endl;

 }

system("pause");
return 0;

}

