//Programa creado por: Gema Emperatriz Manzano Machuca
//Carnet: MM18024

//librerias a utilizar
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

//cuerpo del programa
using namespace std;

int main (int argc, char *argv[])
{

int n;

int fact=1;
  
do{

cout<<"Ingrese un numero: "<<endl;
cin>>n;

}while (n < 0 );

for (int i=1;i<=n;i++)
{
	
	fact=fact*i;
	
}

cout <<"El factorial de "<< n << " es: "<<fact<<endl;

system("pause");
return EXIT_SUCCESS;

}

