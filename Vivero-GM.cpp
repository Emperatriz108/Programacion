//Universidad de El Salvador
//Facultad Multidisciplinaria Oriental
//Nombre: Gema Emperatriz Manzano Machuca
//Carnet: MM18024

//Librerias a utilizar:

#include <iostream>//Entrada y salida de datos
#include <windows.h>//que contiene las declaraciones de todas las funciones de la biblioteca Windows
#include <string.h>//librería centrada en el tratamiento de cadenas
#include <queue>//libreria para el uso de colas 

using namespace std;

//Declaracion de la funciones
//Funcion del menu para mostrar las opciones al usuario en la consola
void menu ();
//Funcion para limpiar la consola
void l();

//Clase Tallo
class Tallo{
	private:
		float alturaTallo;//altura del tallo
		float grosorTallo;//grosor del tallo;
	public:
		Tallo();
		void setaltTallo(float a){
			this->alturaTallo = a;
		}
		void setgroTallo(float g){
			this->grosorTallo = g;	
		}
		float getaltTallo(){
			return this->alturaTallo;
		}
		float getgroTallo(){
			return this->grosorTallo;
		}
		~Tallo();
};
Tallo::Tallo(){
}
Tallo::~Tallo(){
}

//Clase Hoja
class Hoja{
	private:
		string formHoja;//forma de la hoja
		float tamHoja;//tamanio de la hoja
	public:
		Hoja();
		void setfmHoja(string fH){
			this->formHoja = fH;
		}
		void settmHoja(float tam){
			this->tamHoja = tam;
		}
		string getfmHoja(){
			return this->formHoja;
		}
		float gettmHoja(){
			return this->tamHoja;
		}
		~Hoja();	
};
Hoja::Hoja(){//Constructor
}
Hoja::~Hoja(){//Destructor
}

class Arbol:public Hoja, public Tallo{
	private:
		
		string Ncomun;
		string Ncientf;
		string Familia;
		Hoja *formHoja;
		Hoja *tamHoja;
		Tallo *altTallo;
		Tallo *gTallo;
		
	public:
		Arbol();
		
		void setnombArbol(string n){
			this->Ncomun = n;
		}
		
		string getnombArbol(){
			return this->Ncomun;
		}
		
		void setnombCienArbol(string nCf){
			this->Ncientf = nCf;
		}
		
		string getnombCienArbol(){
			return this->Ncientf;
		}
		
		void setfamArbol(string f){
			this->Familia = f;
		}

		string getfamArbol(){
			return this->Familia;
		}
		~Arbol();
};
Arbol::Arbol(){//Constructor
}
Arbol::~Arbol(){//Destructor
}

int main(){

	queue<Arbol> cola;//Declaracion de cola
	Arbol *punt;//Declaracion de puntero para la clase Arbol
	Arbol a;//Refereancia a Arbol
	Arbol *ingresoCola = new Arbol();//Instanciando un  objeto

	//Declaracion de variables a utilizar
	
	string Ncomun;//Nombre comun
	string Ncientf;//Nombre cientifico
	string familia;//Familia del arbol
	string formHoja;//Forma de hoja
	float tamHoja;//Tamaño de hoja
	float alturaTallo;//Altura de tallo
	float grosorTallo;//Grosor de tallo
	string dato ;//El dato que se busca
	int opc;//numero de opcion
	char resp;//respuesta
	
	do{
		//Llamamos a la funcion menu
		menu();
		//Se ingresa la opcion(opc) que se desee realizar
		cin>>opc;
		l();//Llamamos a la funcion l 
		
		//Dependiendo de la opcion elejida se realizara los acciones para cada caso
		switch(opc){
			//Para el caso 1 pedimos al usuario que ingrese los datos del arbol
			case 1:
				system("color D0");
				
				//Se pedira los datos mientras que resp sea igual a y
				do 
				{
				//Se le pide al usuario que ingrese los datos del arbol.
				
				cout<<"Ingrese el nombre Comun del arbol:"<<endl;
				cin>>Ncomun;
				ingresoCola->setnombArbol(Ncomun);
				
				cout<<"Ingrese nombre cientifico del arbol:"<<endl;
				cin>>Ncientf;
				ingresoCola->setnombCienArbol(Ncientf);
				
				cout<<"Ingrese la familia a la que pertenece el arbol:"<<endl;
				cin>>familia;
				ingresoCola->setfamArbol(familia);
				
				cout<<"Introduzca la forma de la hoja: "<<endl;
				cin>>formHoja;
				ingresoCola->setfmHoja(formHoja);
				
				cout<<"Introduzca el tamanio de la hoja: "<<endl;
				cin>>tamHoja;
				ingresoCola->settmHoja(tamHoja);
				
				cout<<"Introduzca la altura del tallo: "<<endl;
				cin>>alturaTallo;
				ingresoCola->setaltTallo(alturaTallo);
				
				cout<<"Introduzca el grosor del tallo: "<<endl;
				cin>>grosorTallo;
				ingresoCola->setgroTallo(grosorTallo);
				
				cola.push(*ingresoCola);
				
				cout<<"Los datos se guardaron con exito."<<endl;
				cout<<"Desea agregar otro arbol? y/n"<<endl;
				cin>>resp;
				system ( "cls" ) ; 
			}while (resp == 'y' || resp == 'Y'); 
				system("pause");
				
				l();
			break;

			case 2:
				
				//Para el caso 2 se van a mostrar los elementos existentes en la lista
				system("color 61");
				if(cola.empty() == true){
				cout<<"+++La lista esta vacia+++"<<endl;
				}
				else{
					cout<<"+++++++++ ARBOLES DEL VIVERO +++++++++"<<endl;
					punt = &cola.front();
					for(int i=1; i<=cola.size(); i++){
						a = *punt;
						cout<<"Nombre del arbol: "<<a.getnombArbol()<<endl;
						cout<<"Nombre cientifico: "<<a.getnombCienArbol()<<endl;
						cout<<"Familia: "<<a.getfamArbol()<<endl;
						cout<<"Forma de la hoja: "<<a.getfmHoja()<<endl;
						cout<<"Tamanio de la hoja: "<<a.gettmHoja()<<" cm"<<endl;
						cout<<"Altura del tallo: "<<a.getaltTallo()<<" mts"<<endl;
						cout<<"Grosor del tallo: "<<a.getgroTallo()<<" cm"<<endl;
						cout<<"****************************************"<<endl;
						punt++;
					}
				}
				system("pause");
				l();
			break;

			case 3:
				//Para el caso 3 se va a buscar el nombre del arbol que desee encontrar
				system("color F1");
				cout<<"********** BUSCADOR DE ARBOL ************"<<endl;
				
    			//Condicion cuando no hay elementos en la cola
    			if(cola.empty() == true){
					cout<<"+++La lista esta vacia+++"<<endl;
				}
				
				//Cuando existen elementos en la cola
				else{
				
					//Se le pide al usuario que ingrese el nombre del arbol
					cout<<"Ingrese Arbol a buscar: "<<endl;
					cin>>dato;
					
					//El puntero apunta al frente de la cola
					punt = &cola.front();
					
					//Se repetira siempre en cuando i sea menor que el tamaño de la cola 
					for(int i=1; i<=cola.size(); i++){
						a = *punt;// a va a tomar el valor del puntero
						
						//Si el dato es igual al nombre del arbol en la cola se va a imprimir los datos
						if(dato == (a.getnombArbol ()) ){
							cout<<"Arbol encontrado..."<<endl;
							cout<<"El arbol es : "<<endl;
							cout<<"Nombre del arbol: "<<a.getnombArbol()<<endl;
							cout<<"Nombre cientifico: "<<a.getnombCienArbol()<<endl;
							cout<<"Familia: "<<a.getfamArbol()<<endl;
							cout<<"Forma de la hoja: "<<a.getfmHoja()<<endl;
							cout<<"Tamanio de la hoja: "<<a.gettmHoja()<<" cm"<<endl;
							cout<<"Altura del tallo: "<<a.getaltTallo()<<" mts"<<endl;
							cout<<"Grosor del tallo: "<<a.getgroTallo()<<" cm"<<endl;
							cout<<endl;
						}
						//Si no, significa que no existe un arbol con el nombre ingresado
						else{
							cout<<"No se ha podido encontrar el arbol. "<<endl;
						}
						punt++;//El puntero va ir incrementando
					}
					
				}
				punt = &cola.front(); 
				system ("pause");
				l();
			break;
			
			case 4:
				//Eliminar un elemento de la lista
				system("color A0");
				
				//Cuando la cola esta vacia
				if(cola.empty() == true ){
    				cout<<"+++La lista esta vacia+++"<<endl;
				}
				
				//Cuando existen elemento se elimina el primer elemento de la cola
				else{
					cola.pop();
					cout<<"++++++++++ SE HA ELIMINADO EXITOSAMENTE DE LA LISTA ++++++++++"<<endl;
					
   				}	
   				system ("pause");
			break;
		}
		l();
	}while(opc!=5);
	
	return 0;
}

void menu(){
	system("color 57");
	cout<<"*****************BIENVENIDO AL VIVERO**************"<<endl;
    cout<<"1. Agregar nuevo arbol."<<endl;
    cout<<"2. Listar arboles en existencia."<<endl;
    cout<<"3. Buscar un arbol."<<endl;
    cout<<"4. Eliminar un arbol."<<endl;
    cout<<"5. Salir"<<endl;
    cout<<"***************************************************"<<endl;
}

void l(){
	system("cls");
}
