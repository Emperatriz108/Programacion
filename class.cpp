#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Pila{
	private:
		class Nodo {
			public:
		int info;
		Nodo *sig;
   	};
   	Nodo *raiz;// nodo raiz
   	public:
    Pila();
    ~Pila();
    void insertar(int x);
    int extraer();
    void imprimir();
	
};

Pila::Pila()
{
    raiz = NULL;
}

void Pila::insertar(int x)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL)
    {
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else
    {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

int Pila::extraer()
{
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

void Pila::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado de todos los elementos de la pila.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}
Pila::~Pila()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

int main(int argc, char** argv) {
	
	Pila *pila1;
    pila1= new Pila();
    int opcion;
    char resp;
do{
cout<<"MENU"<<endl;
cout<<"1-Insertar"<<endl;
cout<<"2-Eliminar"<<endl;
cout<<"3-Mostrar"<<endl;
cout<<"4-Salir"<<endl;
cout<<"Ingrese una opcion:"<<endl;
cin>>opcion;
switch(opcion){
case 1:
	do{
		int n;
		cout<<"Ingrese un numero: ";
		cin>>n;
		pila1->insertar(n);
		cout<<"Quiere agregar otro nodo?y/n"<<endl;
		cin>>resp;
	}while(resp=='y' || resp=='Y');
	system("cls");
	break;
case 2:
		pila1->extraer();
		system("cls");
break;
case 3:
	pila1->imprimir();
	system("pause");
	system("cls");
break;
}
}while(opcion!=4);

 	return 0;

}
