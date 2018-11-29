//Nombre: Gema Emperatriz Manzano Machuca
//Carnet: MM18024
//Parcial Clane N 1
//Fecha de creacion: 28/11/2018

//Librerias a utilizar:
#include <iostream>//para operaciones de entrada/salida. 

# include <math.h>//libreria para operaciones matematicas

#include <stdlib.h>//Epropósito general del lenguaje de programación

#include <stdio.h>//Contiene las definiciones de las macros, las constantes, 
//las declaraciones de funciones de la biblioteca estándar

#include <fstream>//Clase de flujo de entrada / salida para operar en archivos. 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//declaracion de funciones:
int menu();//funcion para el menu
int fibo(int n);//funcion para resolver la serie de fibonacci
double factorial (int n);//funcion para factorial
double taylor (int n, int x);//funcion para resolver la serie de taylor
void limp();//funcion para limpiar la pantalla

int main() {
	system("color 57");//color de la consola
	//declarar variable
	int op;
	
	menu();//llamar funcion
	cin>>op;//ingresar la opcion
	cout<<endl;
	
	limp();//limpiar pamtalla
	
	//Segun la opcion se realizaran las acciones
	switch (op)
	{
		//Efectuar la serie de fibonacci
		case 1: 
		system("color f5");//color de pantalla
		cout<<"\n ~~~~~~~ FIBONACCI~~~~~~~ \n\n";
	    //declaracion de variables
	    int i,
		int num ;
	    
	    do
	    {
	        cout<<"Ingrese un numero entero y positivo: ";
	        cin>>num;
	        
	    } while(num < 0);
	    
	    cout<<"\nLa serie es: \n\n\t";
	    
	    for(i=0; i<num; i++)
	    {
	       if(fibo(i) != 0)
	          cout<< ", "; 
	        
	        cout<< fibo(i);       
	    }
	    cout<<endl;
	    system("pause");
	    limp();
	    
	    return main();
	    break;
	    
	    //Efectuar la serie de Taylor
	    case 2:
	    	system("color 63");//color de la pantalla
	    	cout<<"<<<<<<<<<<< SERIE DE TAYLOR >>>>>>>>>>>>>>>"<<endl;
    		int n,x;
			cout<<"valor de n:  ";
			cin>>n;
			cout<<"valor de x:  ";
			cin>>x;
			printf("El valor de Taylor para n = %d , x = %d   es  =  %f\n", n, x, taylor(n,x));
			cout<<endl;
			system("pause");
			
	    	limp();//limpiar
			return main();//volver al menu
			
			break;
		//ver los resultados
		case 3:
			system("color 75");//color de pantalla
			char cadena[300];
			
			if(op== 1){
				ofstream ofs("Resultados.txt");
				ofs<<"Opcion--- Nombre de opcion --- Dato del usuario ---Resultado"<<endl;
				ofs<< op <<" Serie Fivonacci "<< num << "result:"<<fibo(i)<<endl;
				ofs.close();
			}
			if(op== 2){
				ofstream ofs("Resultados.txt");
				ofs<<"Opcion--- Nombre de opcion --- Dato del usuario ---Resultado"<<endl;
				ofs<< " 2 "<<" Serie de Taylor "<< "n="<<n<< "x="<<x << "result:"<<fibo(i)<<endl;
				ofs.close();
			}
			
		break;
			
		case 4 :
			system("color c0");
			cout<<"-----Adios vuelva pronto------"<<endl;
			return 0;
	}
	return 0;
}

//funcion menu
int menu(){
	cout<<"<<<<<<<<< MENU >>>>>>>>>>>"<<endl;
	cout<<"1. Serie Fivonacci"<<endl;
	cout<<"2. Serie de Taylor"<<endl;
	cout<<"3. Ver resultados"<<endl;
	cout<<"4. Salir"<<endl;
}

//funcion serie de fivonacci

int fibo(int n)
{
    if(n == 0 || n == 1)
       return n;
    else
       return fibo(n - 2) + fibo(n - 1);
}

//funcion serie de taylor

double taylor (int n,int x)
{
	double t;
	double s=0;
	for (int i =0;i<=n;i++)
	{
		t= pow(x,i)/ factorial(i);
		s = s+t;
	}
return s;
}

//funcion para factorial
double factorial(int n)
{
	double fac=1;
	for(int i=2; i <=n; i++){
		fac *= i;
	  }
return  fac;
}

//funcion para limpiar la pantalla
void limp(){
	system("cls");
}

