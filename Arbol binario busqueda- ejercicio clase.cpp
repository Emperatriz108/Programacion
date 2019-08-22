#include <iostream>

using namespace std;


typedef int tipoDato;

class Nodo{
     public:
         tipoDato nro;
         Nodo *izq, *der;
};

typedef Nodo *ABB;
class ArbolBinarioBusqueda{
		
		public:
        ABB crearNodo(tipoDato x);
		void insertar(ABB &arbol, int x );
		void preorden(ABB arbol);
		void inOrden(ABB arbol);
		void postOrden(ABB arbol);
		void verarbol(ABB arbol,int n);
		int alturaAB(ABB arbol);
		int nodoN(ABB arbol,int n);
		int sumatoria(ABB arbol);
};

ABB ArbolBinarioBusqueda::crearNodo(tipoDato x )        {
             ABB nuevoNodo = new Nodo();
             nuevoNodo->nro = x;
             nuevoNodo->izq = NULL;
             nuevoNodo->der = NULL;

             return nuevoNodo;
}

void ArbolBinarioBusqueda::insertar(ABB &arbol, int x ){
	if(arbol==NULL){
		arbol= crearNodo(x);
	}
	else if(x < arbol->nro){
		insertar(arbol->izq,x);
	}
	else if(x > arbol->nro){
		insertar(arbol->der,x);
	}
}

void ArbolBinarioBusqueda::preorden(ABB arbol){
	if(arbol != NULL){
		cout<< arbol->nro <<"  ";//raiz
		preorden(arbol->izq);// hijo iz
		preorden(arbol->der);//hijo der
	}
}

void ArbolBinarioBusqueda::inOrden(ABB arbol){
	if(arbol != NULL){
	
		preorden(arbol->izq);// hijo iz
		cout<<arbol->nro<<"    ";//raiz
		preorden(arbol->der);//hijo der
	}
}

void ArbolBinarioBusqueda::postOrden(ABB arbol){
	if(arbol != NULL){
		
		postOrden(arbol->der);//der
		postOrden(arbol->izq);//izq
		cout<<arbol->nro<<"    ";//raiz
	}
}


void ArbolBinarioBusqueda::verarbol(ABB arbol,int n){
	if(arbol==NULL)
		return;
	verarbol(arbol->der,n+1);
	for(int i=0;i<n;i++){
		cout<<"     ";
	}	
	cout<<arbol->nro<<endl;
	verarbol(arbol->izq,n+1);
}

int ArbolBinarioBusqueda::alturaAB(ABB arbol)
{
    int AltIzq, AltDer;

    if(arbol==NULL)
        return 0;
    else
    {
        AltIzq = alturaAB(arbol->izq);
        AltDer = alturaAB(arbol->der);

        if(AltIzq>AltDer)
            return AltIzq+1;
        else
            return AltDer+1;
    }
}


int ArbolBinarioBusqueda::sumatoria(ABB arbol){
	if(arbol!=NULL){
		int centro = arbol->nro;
		int izq = sumatoria(arbol->izq);
		int der = sumatoria(arbol->der);
		return izq+centro+der;
	}
	return 0;
}


void menu(){
	cout<<"***************************************************"<<endl;
	cout<<"----------------  ARBOL BINARIO  ------------------"<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"1. Ingresar datos\n";
	cout<<"2. Mostrar el arbol\n";
	cout<<"3. Mostrar recorridos\n";
	cout<<"4. Salir\n";
	cout<<"---------------------------------------------------"<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Ingrese su opcion: ";
}

void sub_menu(){
	cout<<"***************************************************"<<endl;
	cout<<"----------------<<  RECORRIDOS  >>------------------"<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"1. Recorrido pre-orden\n";
	cout<<"2. Recorrido in-orden \n";
	cout<<"3. Recorrido post-orden\n";
	cout<<"4. Salir\n";
	cout<<"---------------------------------------------------"<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Ingrese su opcion: ";
}

int main(){
	ArbolBinarioBusqueda *ab = new ArbolBinarioBusqueda();
    ABB arbol = NULL;   // creado Arbol
	int pa=0;
	int cont=0;
    int n;  // numero de nodos del arbol
    tipoDato x; // elemento a insertar en cada nodo

	
	int op;
	int op2;
	char resp;
	
		do{
		system("color 57");
		cout<<"--------------------------------------------"<<endl;
		cout<<" Peso del arbol: "<<pa<<endl;
		cout<<" Altura del arbol: "<<ab->alturaAB(arbol)<<endl;
		menu();
		cin>>op;
		system("cls");
		switch(op){
			case 1:
				
				do{
				
					cout<<"Ingrese el numero de nodos del arbol: "<<endl;
					cin>>n;
					
					for(int i=0;i<n;i++){
						cout<<"Ingrese el valor del nodo: "<<endl;
						cin>>x;
						ab->insertar(arbol,x);
					}
					pa=pa+n;
					cout<<"Los datos se guardaron con exito."<<endl;
					cout<<"Desea agregar otro arbol? y/n"<<endl;

					cin>>resp;
				}while(resp == 'y' || resp == 'Y'); 
				system("pause");
				system("cls");
			break;
			case 2:
					cout<<"------------------<< Mostrar el arbol >>------------------------- "<<endl;
					ab->verarbol(arbol,x);
					cout<<endl;
					cout<<" Peso del arbol: "<<pa<<endl;
					cout<<" Altura del arbol: "<<ab->alturaAB(arbol)<<endl;
						int h;//altura del arbol
					int m;
					h=ab->alturaAB(arbol);
					
					cout<<"Sumatoria de claves del arbol: "<<ab->sumatoria(arbol)<<endl;

					
					system("pause");
					system("cls");
			break;
			case 3:
				
				do{
					system("color 57");
					cout<<" Peso del arbol: "<<pa<<endl;
					cout<<" Altura del arbol: "<<ab->alturaAB(arbol)<<endl;
					cout<<"Sumatoria de claves del arbol: "<<ab->sumatoria(arbol)<<endl;

					sub_menu();
					cin>>op2;
					system("cls");
					switch(op2){
						case 1:
							cout<<"------------------<< RECORRIDO PRE-ORDEN  >>------------------------- "<<endl;	
							ab->preorden(arbol);
							cout<<endl;
							system("pause");
							system("cls");
						break;	
							
						case 2:
							cout<<"------------------<< RECORRIDO IN-ORDEN  >>------------------------- "<<endl;
							ab->inOrden(arbol);
							cout<<endl;
							system("pause");
							system("cls");
						break;
						case 3:
							cout<<"------------------<< RECORRIDO POST-ORDEN >>------------------------- "<<endl;
							ab->postOrden(arbol);
							cout<<endl;
							system("pause");
							system("cls");
						break;
					}
				}while(op2 != 4);
				
			break;
		}
	}while(op != 4);
	return 0;
}
