#include <iostream>
#include <iomanip>
#include <windows.h> 
#include <mmsystem.h> 
#include <cstdlib>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	system("color 3f");
	
	float ventas;
	float s1 = 80.000;
	float s2 = 160.000;
	float s3 = 320.000;
	float s4 = 450.000;
	float s5 = 550.000;
	float v;
	
	
	
	do{
		cout<<"Ingrese la cantidad de ventas que ha realizado: ";
		cin>> ventas;
		
	}while(ventas<= 0);{
		
		if(ventas <= 500000){
			cout<<"Su salario es: $";
			
			cout<<fixed<<setprecision(2)<<s1<<endl;
			PlaySound(TEXT("Coin sound.wav"),NULL,SND_SYNC);
		}
		else if (ventas <= 1000000){
			cout<<"Su salario es:$ ";
			cout<<fixed<<setprecision(2)<<s2<<endl;
			PlaySound(TEXT("Coin sound.wav"),NULL,SND_SYNC);
		}
		else if (ventas <= 1500000){
			cout<<"Su salario es:$ ";
			cout<<fixed<<setprecision(2)<<s3<<endl;
			PlaySound(TEXT("Coin sound.wav"),NULL,SND_SYNC);
		}
		else if (ventas <= 2500000){
			cout<<"Su salario es:$ ";
			cout<<fixed<<setprecision(2)<<s4<<endl;
			PlaySound(TEXT("Coin sound.wav"),NULL,SND_SYNC);
		}
		else if (ventas <= 4000000){
			cout<<"Su salario es:$ ";
			cout<<fixed<<setprecision(2)<<s5<<endl;
			PlaySound(TEXT("Coin sound.wav"),NULL,SND_SYNC);
		}	
		else{
		
			v = ventas * 0.20;
			cout<<"Su salario es:$ ";
			cout<<fixed<<setprecision(2)<<v<<endl;
			PlaySound(TEXT("Coin sound.wav"),NULL,SND_SYNC);
		}
	}	
		
	return 0;
}
