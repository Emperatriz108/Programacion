//Universidad de El Salvador
//Creado por: Gema Emperatriz Manzano Machuca
//N° de carnet: MM18024
//fecha de crecion: 16-03-2019 

#include <iostream>
#include <queue>
#include <conio.h>
#include <cstdlib>
using namespace std;

 //creacion de la clase Cola
class Cola{
	
	/*atributo de la cLase*/
	class Nodo{//estructura de la clase
		public: //cada nodo de la cola apunta a sig
		int x;//coordenada x
		int y;//coordenada y
		int z;//coordenada z
		Nodo *sig;
	};
	
	Nodo *raiz;//primero en la cola
	Nodo *fondo;//ultimo de la cola 
	/*-------------------------------*/
	
	//---------METODOS--------------//
	public:
		Cola();//Constructor. 
		~Cola();//Destructor.
		void insertar(float x,float y,float z);//funcion para insertar elementos a la cola
		int extraer();//Elimina la primer coordenada de la cola
		void imprimir();//Imprime los elementos de la cola
		bool vacia();//funcion vacia
		void promedio();//Promedio de coordenadas
		
	
// Que fondo y raiz tiene la misma direccion
};

//---------------------CONSTRUCTOR -------------------//
Cola::Cola(){ //(::)Referencia clase
	raiz= NULL;
	fondo = NULL;

}
//---------------------DESTRUCTOR------------------//
Cola::~Cola(){//elimina como pila
	Nodo *reco=raiz;
	Nodo *bor;
	while(reco != NULL){
		bor=reco;
		reco= reco -> sig;
		delete bor;
	}
}
//---------------- FUNCION INSERTAR -----------------//
void Cola::insertar(float x,float y, float z){
	Nodo *nuevo;//guarda espacio
	nuevo = new Nodo();//divide el espacio
	nuevo ->x = x;
	nuevo ->y = y;
	nuevo ->z = z;
	nuevo -> sig = NULL;
	
	if(vacia()){
		raiz = nuevo;
		fondo = nuevo;
	}
	else{
		fondo->sig = nuevo;
		fondo = nuevo;
	}
	
}

//---------------FUNCION EXTRAER-----------------//
int Cola::extraer(){
	int delx = raiz->x;
	int dely = raiz->y;
	int delz = raiz->z;
	Nodo *bor=raiz;
	if(raiz == fondo){
		raiz=NULL;
		fondo = NULL;	
	}
	
	else{
		raiz = raiz->sig;
	}
	delete bor;
	return delx,dely,delz;
}

//------------FUNCION IMPRIMIR-------------------//
void Cola::imprimir(){
	if(!vacia()){
		Nodo *reco = raiz;
		int i=1;
		while(reco != NULL){
			cout<<"Coordenada Nº: "<<i<<endl;
			cout<<"El valor x: "<< reco->x <<endl;
			cout<<"El valor y: "<< reco->y<<endl;
			cout<<"El valor z: "<< reco->z<<endl;
			cout<<"---------------------------------"<<endl;
			reco = reco->sig;
			i++;
		}
	cout << endl;

	}else{
		cout<<"La cola esta vacia\n"<<endl;
	}
}
	

//------------FUNCION PROMEDIO------------------------//
void Cola::promedio(){
	Nodo *aux = raiz; //maneja las direcciones, pasara por todos los datos de la cola
	Nodo *prom = new Nodo(); //almacenara la sumatoria y luego el promedio de cada coordenada
	int i = 0;
		if(!vacia()){
			while(aux != NULL){ //verificar y cambiar la condicion
				prom->x += aux->x;
				prom->y += aux->y;
				prom->z += aux->z;
				aux = aux->sig;
				i++;
			}
		prom->x = prom->x/i;	
		prom->y = prom->y/i;
		prom->z = prom->z/i;
		cout<<"------PROMEDIOS DE LAS COORDENADAS-----------"<<endl;
		cout<<"El promedio de x es de: "<< prom->x << endl;
		cout<<"El promedio de y es de: "<< prom->y << endl;
		cout<<"El promedio de z es de: "<< prom->z << endl;
		
		}else
			cout<<"La cola esta vacia\n"<<endl;
}

//---------------------FUNCION VACIA--------------- //
bool Cola::vacia(){
	if(raiz==NULL){
		return true;
	}
	else {
		return false;
}
}

int main(){
	
	system("color F5");
	
	Cola *cola1 = new Cola();//instantiar un objeto
	
	char resp;
	int op;
	float x;
	float y;
	float z;
	
	
	do{
	cout<<"--------- MENU ----------"<<endl;
	cout<<"1. Agregar coordenadas"<<endl;
	cout<<"2. Mostrar coordenadas"<<endl;
	cout<<"3. Mostrar promedio de coordenadas"<<endl;  
	cout<<"4. Eliminar coordenada"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"Ingrese una opcion:"<<endl;
	cin>>op;
	
	switch(op){
		case 1: 
			do{
				cout<<"Valor de x: "<<endl;
				cin>>x;
				cout<<"Valor de y: "<<endl;
				cin>>y;
				cout<<"Valor de z: "<<endl;
				cin>>z;
				
				cola1->insertar(x,y,z);
			
				cout<<"Quiere agregar otro nodo?y/n"<<endl;
				cin>>resp;
			}while(resp=='y' || resp=='Y');
			system("cls");
		break;
		
		case 2:
				cout<<"-------COORDENADAS---------- "<<endl;
				cola1->imprimir();
				cout<<endl;
			
				system("pause");
				system("cls");
			break;
			
		case 3:
			cout<<"-------------PROMEDIOS--------------- "<<endl;
			cola1->promedio();
			system("pause");
			system("cls");
			break;
			
		case 4:
			cola1->extraer();
			cout<<"--------- Coordenada borrada ----------"<<endl;
			system("pause");
			system("cls");
			break;
		}
	}while(op != 5);
	
	delete cola1;

	cin.get();
	return 0;
}
