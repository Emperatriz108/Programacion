//Programa creado por: Gema Emperatriz Manzano Machuca 
//Carnet: MM18024
//Drscripcion: Programa que calcule el promedio de 5 notas

//librerias a utilizadar
#include <iostream> //utilizado para operaciones de entrada/salida.

//cuerpo del programa.
using namespace std;

int main (int argc, char *argv[]){
//variables utilizadas.
float notas [5];//Arreglo ocupa 5 espacios en memoria
float suma=0;//acumulador
float promedio;

//Ciclo for.
for (int i=0;i<=4;i++){

do
{
	//Peticion de las notas.
	cout <<"Ingrese la nota: "<<i+1<<endl;
				//Adquiere un valor.
	cin>>notas[i];
	//acumular la sumatoria de notas.
	suma=suma+notas[i]; 
	
}	while (notas[i] < 0);

}
promedio=suma/5; //Proceso de dividir la sumatoria de las notas con la cantidad, para sacar el promedio.

cout<<"Sus notas son: "<<endl;
				//Imprime las notas una por una.
cout<<"N1: "<<notas[0]<<endl;
cout<<"N2: "<<notas[1]<<endl;
cout<<"N3: "<<notas[2]<<endl;
cout<<"N4: "<<notas[3]<<endl;
cout<<"N5: "<<notas[4]<<endl;
				//Imprime el promedio.
cout<<"El promedio es de: "<<promedio<<endl;



return 0;

}
