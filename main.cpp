#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Pila{
	private:
		class Nodo{
		public:
		int info;
		Nodo *sig;	
	};
	Nodo *raiz;
	public:
		Pila();//contructor
		~Pila();//destructor: limpiar la memoria del operador
		void insertar(int x);
		int extraer();
		void imprimir();
};

//Nombre de clase,,, accion
Pila::Pila()
{
    raiz = NULL;
}


void Pila::insertar(int x){
	Nodo *nuevo;//crear un objeto de tipo nodo reserva el espacio
	nuevo = new Nodo();//divide info, puntero
	nuevo -> info = x;
	if(raiz == NULL){//raiz siempre esta apuntando a NULL	
		raiz=nuevo;
		nuevo ->sig = NULL;//10 APUNTA A NULL
	}
	else{
		nuevo ->sig = raiz;//pasar posicion  
		raiz = nuevo;
	}
}
//cap de deper

int Pila::extraer(){
	 if (raiz != NULL)
    {
        int informacion = raiz->info;
        Nodo *bor = raiz;
        raiz = raiz->sig;
        delete bor;
        return informacion;
    }
    else
    {
        return -1;
    }
}


int main(int argc, char** argv) {
	Pila *pila1;
	pila1= new Pila();//llamar a constructor
	
	int a;
	int b;
	cout<<"Ingrese a: ";
	cin>>a;
	cout<<endl;
	cout<<"Ingrese b: ";
	cin>>b;
	cout<<endl;
	
	pila1->insertar(a);
	pila1->insertar(b);
	pila1->imprimir();

	
	return 0;
}


