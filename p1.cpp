//Este programa fue hecho por:
//Gema Emperatriz Manzano Machuca
//Carnet: MM18024
//Fecha de creacion: 10/09/2018
//Fecha de modificacion: 13/09/2018

//Este programa tiene por objetivo de calcular el salario de un usuario
//Segun la cantidad de ventas que ha realizado

//Para ello se utilizan la siguientes librerias

#include <iostream>//Flujo de datos
#include <iomanip>//Para expresar el resultado en decimales
#include <windows.h> //Para agregarle el sonido cuando se ejecuta la respuesta
#include <mmsystem.h> //Para poder sonido desde la carpeta
#include <cstdlib> //Para cambiar el color del fondo y letra de la terminal


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	system("color 3f");//El numero "3" representa el color de fondo Aqua y la letra "f" es color blanco para la letra
	
	float v; //Es la cantidad de ventas
	const float s1 = 80.000; // Es el salario correspondiente a 
	const float s2 = 160.000;//Es el salario correspondiente a 
	const float s3 = 320.000;//Es el salario correspondiente a 
	const float s4 = 450.000;//Es el salario correspondiente a 
	const float s5 = 550.000;//Es el salario correspondiente a 
	float s6;// Es el salario del usuario 
	
	
	//Mientras que "v" sea menor o igual que 0 
	//Se pedira nuevamente que ingrese la cantidad de ventas
	//Hasta que "v" sea mayor que 0
	 
	do{
		cout<<"Ingrese la cantidad de ventas que ha realizado: ";
		cin>> v;
		
	}while(v <= 0);{
		
		//Si v <= 500000 entonces el salario del usuario sera "s1"
		if(v <= 500000){
			cout<<"Su salario es: $";
			cout<<fixed<<setprecision(2)<<s1<<endl;
			PlaySound(TEXT("Coin sound.wav"),NULL,SND_SYNC);
		}
		
		//Si v <= 1000000 entonces el salario del usuario sera "s2"
		else if (v <= 1000000){
			cout<<"Su salario es: $";
			cout<<fixed<<setprecision(2)<<s2<<endl;
			PlaySound(TEXT("Coin sound.wav"),NULL,SND_SYNC);
		}
		//Si v <= 1500000 entonces el salario del usuario sera "s3"
		else if (v <= 1500000){
			cout<<"Su salario es:$ ";
			cout<<fixed<<setprecision(2)<<s3<<endl;
			PlaySound(TEXT("Coin sound.wav"),NULL,SND_SYNC);
		}
		//Si v <= 2500000 entonces el salario del usuario sera "s4"
		else if (v <= 2500000){
			cout<<"Su salario es:$ ";
			cout<<fixed<<setprecision(2)<<s4<<endl;
			PlaySound(TEXT("Coin sound.wav"),NULL,SND_SYNC);
		}
		//Si v <= 4000000 entonces el salario del usuario sera "s5"
		else if (v <= 4000000){
			cout<<"Su salario es:$ ";
			cout<<fixed<<setprecision(2)<<s5<<endl;
			PlaySound(TEXT("Coin sound.wav"),NULL,SND_SYNC);
		}
		//Si v > 4000000 entonces el salario del usuario sera el 20% de v	
		else{
		
			s6 = v * 0.20;
			cout<<"Su salario es:$ ";
			cout<<fixed<<setprecision(2)<<s6<<endl;
			PlaySound(TEXT("Coin sound.wav"),NULL,SND_SYNC);
		}
	}	
		
	return 0;
}
