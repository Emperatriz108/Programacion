//Nombre: Gema Emperatriz Manzano Machuca
//Carnet: MM18024

//Descripcion: Realizar un programa para el alquiler de vehiculos.

//Librerias a utilizar
#include <iostream> //para operaciones de entrada/salida. 
 
#include <cstdlib> //propósito general del lenguaje de programación

#include <ctype.h> //diseñado para operaciones básicas con caracteres

#include <windows.h>//contiene las declaraciones de todas las funciones de la biblioteca Windows 


using namespace std;

/*Estructura para los datos del vehiculo
para alquilar*/
struct vehiculo 
{
	string modelo ;
	float precio ;
	int dias ;
	float pago;
} ;

/*Estructura para los datos del cliente*/
struct cliente 
{
	string nombre ;
	string apellido  ;
	char Dui [9] ;
	char Licencia [10] ;	
};

/*Estructura para agregar nuevo vehiculo*/
struct agregarVehiculo 
{
	string modelo  ;
	char anio [4];
	char numeroChasis [5] ;
	
};

/*Funcion para el calculo de total a pagar
del cliente por el alquiler del auto, el precio y dias totales*/
float calPago (float precio, int dias)
{
	float pago ;
	pago = precio * dias ;
	return pago ;
}
/*Funcion para el menu del sistema*/
int menu ()
{
	cout << "1. Mostrar vehiculo." << endl;
	cout << "2. Agregar clientes." << endl;
	cout << "3. Agregar vehiculo." << endl;
	cout << "4. Regresar." << endl;
	cout << "5. Salir." << endl;
	
	system ("color b1")	; //color	
}

/*Funcion para la validacion, no permitir ingresar letras
en un lugar donde corresponden numeros*/
int validacion()
{
	int var ;
	while (cin.fail() )
	{
    cin.clear() ;
    cin.ignore(1000, '\n') ;
    cout << "Has introducido un dato incorrecto, vuelve a intentarlo" << endl ;
	}
	return var ; //retorna el valor de la variable
}

/*Funcion para la validacion, no permitir ingresar numeros ni signos
en un lugar donde corresponden letras*/
string validacion_text_only(string texto)
{
	string nombre;
	int i = 0;
	bool bandera = true; //retorna un valor verdadero
	
	/*la funcion se repite hasta que la variable bandera sea verdadero*/
	do
	{
		cout << texto << endl ;
		cin >> nombre ; //lectura de variable desde la estructura
			
		while ( nombre[i] )
		{
			if (isalpha ( nombre[i] ) )
			{ 
				/*isalpha solo pemite caracteres de letras, no simbolos ni numeros*/
			}
			else
			{
				cout << "El dato ingresado no es valido" << endl ;
				bandera = true ;
			break ;
			}
				i++ ;
				bandera = false ;
		}
	} while ( bandera ) ;
	return nombre ;
}

void d () ; //funcion para datos que se mantengan constantes

//Inicio de sistema
int main ()
{	
	/*Primer cuadro de bienvenida*/
	system ( "color 5b ") ; //color
	
	cout << "**************************************************************"<< endl ;
	cout << "**************************************************************"<< endl ;
	cout << " <<<<<<<<<<<<<<<< Bienvenido a CarPrest >>>>>>>>>>>>>>>>>>>>>>"<< endl ;
	cout << "**************************************************************"<< endl ;
	cout << "**************************************************************"<< endl ;

	
	system("pause"); //pausa
	d (); //llamada de funcion
	
	
	vehiculo e  ; //llamado de estructura
	int n ;  //variable para procesos en estructuras
	int menuCar ; //variable para el ingreso de opcion del menu
	int op ; //variable para ingreso de una opcion
	int selec ; //variable para seleccionar el vehiculo
	
	cliente a [n]  ; //llamado de estructura
	agregarVehiculo o [n] ; //llamado de estructura
	
	menu () ; //llamado de funcion menu
	
	cin >> menuCar ; //lectura de variable
	d(); //llamada de funcion
	
	 /*aqui se comienza el proceso del menu del 
	 sistema*/
	switch (menuCar)
	{
		/*opcion uno muestra el listado de carros*/
		case 1:
			system ( "color 4b ") ; //color
			cout << "1-Izusu" << endl ;
			cout << "2-Toyota" << endl ;
			cout << "3-Nissan" << endl ;
			cin >> selec ; //lecuta de variable
			d (); //llamado de funcion
			
			/*menu anidado para la seleccion del vehiculo
			deseado*/
			switch (selec)
			{
				/*opcion del carro uno*/
				case 1 :	
					system ( "color a4 ") ; //color				
					system("explorer.exe Carro3.bmp"); //muestra imagen
					
					cout << "Modelo: Izusu" << endl;
					cout << "Precio: "  ;
					cin >> e.precio ; //lectura de variable
					cout << "Dias: " ;
					cin >> e.dias ; //lectura de variable
					
					e.pago = calPago (e.precio, e.dias); //llamada de funcion de calculo
					cout <<"$ " << e.pago << endl; //Impresion de datos
					
					system("pause"); //pausa
					d (); //llamada de funcion
					
					/*opcion por si desea seguir asiendo otro
					tipo de proceso*/
					
					cout <<endl << "Desea hacer otro proceso?" << endl ;
					cout <<"1-Si\t2-No" << endl ;
					cin >> op ; //lectura de variable
					d () ; //llamada de funcion
					/*Condicion, si la opcion es uno, regresa a pantalla
					de bienvenida y si es dos, sale del sistema*/
					if (op ==1 ) 
					{
						return main () ; //retorna al proceso de inicio
					}
						else if (op==2)
					{
						cout << "Gracias por visitarnos" << endl ;	
						return 0 ; //no retorna nada
					}
				
					
					
				break ;
				
				/*en del carro dos*/
				 case 2 :
				 	
				 	system ( "color a3 ") ; //color
				 	system("explorer.exe Carro2.bmp"); //muestra imagen
				 	
				 	cout << "Modelo: Hilux" << endl;
					cout << "Precio: "  ;
					cin >> e.precio ; //lectura de variable
					cout <<"Dias: " ;
					cin >> e.dias ;  //lectura de variable
					e.pago = calPago (e.precio, e.dias); //llamada de funcion calculo
					cout << "$ " << e.pago << endl ; //impresion de datos
					
					system ("pause"); //pausa
					d (); //llamado de funcion
					
					
					/*opcion por si desea seguir asiendo otro
					tipo de proceso*/
					
					cout <<endl << "Desea hacer otro proceso?" << endl ;
					cout <<"1-Si\t2-No" << endl ;
					cin >> op ; //lectura de variable
					d () ; //llamada de funcion
					
					/*Condicion, si la opcion es uno, regresa a pantalla
					de bienvenida y si es dos, sale del sistema*/
					if (op ==1 ) 
					{
						return main () ; //retorna al proceso de inicio
					}
						else if (op==2)
					{
						cout << "Gracias por visitarnos" << endl ;	
						return 0 ; //no retorna nada
					}
						
				break ;
				//carro tres
				case 3 :
					system ( "color 4c ") ; //color
				 	system("explorer.exe Carro.bmp"); //muestra imagen
				 	cout << "Modelo: Corola" << endl;
					cout << "Precio: "  ;
					cin >> e.precio ; //lectura de variable
					cout <<"Dias: " ;
					cin >> e.dias ; //lectura de variable
					e.pago = calPago (e.precio, e.dias); //llamada de funcion de calculo
					cout << "$" << e.pago; //impresion de datos
						
					system("pause"); //pausa
					d (); //llamada de funcion
								
					
					/*opcion por si desea seguir asiendo otro
					tipo de proceso*/
					
					cout <<endl << "Desea hacer otro proceso?" << endl ;
					cout <<"1-Si\t2-No" << endl ;
					cin >> op ; //lectura de variable
					d () ; //llamada de funcion
					
					/*Condicion, si la opcion es uno, regresa a pantalla
					de bienvenida y si es dos, sale del sistema*/
					if (op ==1 ) 
					{
						return main () ; //retorna al proceso de inicio
					}
						else if (op==2)
					{
						cout << "Gracias por visitarnos" << endl ;	
						return 0 ; //no retorna nada
					}
				break;
				/*Aqui finaliza el menu para los carros*/
			}
			
		break;	
		/*Continuacion del menu principal*/
		/*opcion 2*/
		case 2 : 
			system ( "color 4b ") ; //color
			/*aqui se agrega clientes se crea un do while para que no permita ingresar
			datos menores o iguales que cero*/
			do
			{
				validacion (); //llamado de funcion
				cout << "Agregar Clientes" << endl << endl ;
				cout << "Cuantos clientes desea agregar?" << endl ;
				cin >> n ; //lectura de variable
			} while (n <= 0) ; //condicion
			
			/*ciclo que nos permite ingresar varios datos o varios
			clientes*/
			for (int i = 0 ; i < n ; i++)
			{
				cout << endl << "Cliente # " << i+1 << endl ; 
				a[i].nombre = validacion_text_only ( "Ingrese el nombre del cliente: " ) ; 
				a[i].apellido = validacion_text_only ( "Ingrese el apellido del cliente: " ) ;
				
			/*aqui se agrega clientes se crea un do while para que no permita ingresar
			datos menores que  cero*/
				do
				{
					validacion ();
					cout << "Ingrese el DUI del cliente: " ;
					cin >> a[i].Dui  ; //lectura de variable
					cout << "Ingrese el numero de licencia del cliente: " ;
					cin >> a[i].Licencia  ; //lectura de variable
				} while (a[i].Dui < 0 && a[i].Licencia < 0) ; //condicion

			}
			/*aqui se almacenaran los datos
			que estan dentro del for*/
			for (int i = 0 ; i < n ; i++)
			{
				cout <<"Nombre\tApellido\tDUI\tLicencia\n";
				cout << a[i].nombre << "\t"; //impresion de dato
				cout << a[i].apellido << "\t\t"; //impresion de dato
				cout << a[i].Dui<< "\t"; //impresion de dato
				cout << a[i].Licencia << "\t" << endl ; //impresion de dato
			}
				system("pause"); //pausa
				d (); //llamado de funcion
				
					
				/*opcion por si desea seguir asiendo otro
				tipo de proceso*/
			
				cout <<endl << "Desea hacer otro proceso?" << endl ;
				cout <<"1-Si\t2-No" << endl ;
				cin >> op ; //lectura de variable
				
				d () ; //llamada de funcion
				
				/*Condicion, si la opcion es uno, regresa a pantalla
				de bienvenida y si es dos, sale del sistema*/
				if (op ==1 ) 
				{
					return main () ; //retorna al proceso de inicio
				}
				else if (op==2)
				{
					cout << "Gracias por visitarnos" << endl ;	
					return 0 ; //no retorna nada
				}
			
		break; 
		//tercera opcion del menu
		/*esta es para el ingreso de nuevos
		vehiculos*/
		case 3:
			system ( "color 3a ") ; //color
			/*aqui se agrega clientes se crea un do while para que no permita ingresar
			datos menores o iguales que  cero*/
			
			do 
			{
			cout << "Agregar Vehiculos" << endl << endl;
			cout <<"Cuantos vehiculos desea agregar?"<< endl ;
			cin >> n ; //lectura de variable
			} while ( n <= 0) ; //condicion

			/*ciclo que nos permite ingresar varios datos o varios
			vehiculos*/
			for (int j = 0 ; j < n ; j++)
			{
				
				cout <<endl<< "Cliente # " << j+1 << endl ;
			
				o[j].modelo = validacion_text_only("Ingrese el modelo del vehiculo: ") ;
				cout << "Ingrese anio del vehiculo" << endl ;
				cin >> o[j].anio ; //lectura de variable
				cout << "Ingrese numero de chasis del vehiculo" << endl ;
				cin >> o[j].numeroChasis; //lectura de variable
			}
			
			/*aqui se almacenaran los datos
			que estan dentro del for*/
			for (int j = 0 ; j < n ; j++)
			{
				cout << "Modelo\tAnio\tNumero de chasis\n" ;
				cout << o[j].modelo << "\t"; //impresion de dato
				cout << o[j].anio << "\t"; //impresion de dato
				cout << o[j].numeroChasis << "\t" << endl;	 //impresion de dato
			}
				system("pause"); //pausa
				d (); //llamado de funcion
					
				/*opcion por si desea seguir asiendo otro
				tipo de proceso*/
				
				cout <<endl << "Desea hacer otro proceso?" << endl ;
				cout <<"1-Si\t2-No" << endl ;
				cin >> op ; //lectura de variable
				d () ; //llamada de funcion
					
				/*Condicion, si la opcion es uno, regresa a pantalla
				de bienvenida y si es dos, sale del sistema*/
				if (op ==1 ) 
				{
					return main () ; //retorna al proceso de inicio
				}
				else if (op==2)
				{
					cout << "Gracias por visitarnos" << endl ;	
					return 0 ; //no retorna nada
				}
			
		break ;
		//opcion 4 del menu
		case 4:
			system ( "color 4b ") ; //color
			/*aqui es por si quiere ir a la primera parte 
			de bienvenida*/
			int volver ; //variable para volver al menu
			
			//while para que se de mientras sea igual a uno
			while (volver = 1) 
			{
				cout << "1-Regresar a la pantalla de Bienvenida" << endl ;
				cin >> volver ; //lectura de variable
				system ("cls") ; //borrar
				
				/*Condicion para que si la opcion es 1 se regresara
				a la pantalla de bienvenida*/
				if (volver == 1 ) 
				{
					return main (); //retorna el main
				}
				else if (volver <1 || volver > 1)
				{
					cout << "Opcion incorrecta" << endl ; //opcion incorrecta y se repitr	
				}
			}
		break ;
		//opcion 5 del menu
		case 5 :
			system ( "color 2b ") ; //color
			int salir ; //variable para salir
			
			cout << "Seguro que desea salir?" << endl ;
			cout << "1-Si\t2-No" << endl ;
			cin >> salir ; //lectura de variable
			
			system ("cls") ; //salir
			
			//condicion para salir si la opcion es igual a uno saldra
				if (salir == 1 ) 
				{
					cout << "Gracias por visitarnos" ;
					return 0 ; //no retorna ningun valor
				}
				//si la opcion es igual a dos se vuelve al menu
				else if (salir == 2) 
				{
					return main ();	//retorna el valor main
				}
		}
				
}
//aqui se declara la funcion
void d ()
{
	system ("cls"); //borrar

}
