//Universidad de El Salvador
//Facultad Multidisciplinaria Oriental
//Ingenieria de Sistemas Informaticos
//Nombre: Gema Emperatriz Manzano Machuca
//Tema: Arboles Generales
//Fecha: 12-08-2019

#include <iostream>
using namespace std;

struct nodo{
	int nro;
	struct nodo *izq,*der;
};

typedef struct nodo* ABB;


void insertar(ABB &arbol,int x){
	//1. ARBOL=1, x=2
	//2. arbol=008 x=7
	  
	if(arbol==NULL){
	ABB nuevonodo= new(nodo);
	
	nuevonodo->nro=x;
	nuevonodo->izq=NULL;
	nuevonodo->der=NULL;
	arbol=nuevonodo;
	 }
	else if(x<arbol->nro){
		insertar(arbol->izq,x);
	}
	else if(x>arbol->nro,x){
		insertar(arbol->der,x);
	}
}

int nodoN(ABB arbol,int n){
	if(arbol  != NULL){
		if(n == 1)
			return nodoN(arbol->izq, n-1) + nodoN(arbol->der, n-1)+1;
		return nodoN(arbol->izq, n-1)+ nodoN(arbol->der, n-1);
		}
		return 0;
	}

void verarbol(ABB arbol,int n){
	if(arbol==NULL)
		return;
	verarbol(arbol->der,n+1);
	for(int i=0;i<n;i++){
		cout<<"     ";
	}	
	
	cout<<arbol->nro<<endl;
	verarbol(arbol->izq,n+1);
}

int alturaAB(ABB arbol)
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

int contarHojas(ABB arbol){
	if(arbol==NULL){
		return 0;//arbol vaciio
	}
	if((arbol->der ==NULL)&&(arbol->izq == NULL)){
		//si es hoja retorna el 1
		return 1;
	}
	else{
		//si no es hoja, manda los hijos izquierdo y derecho
		return contarHojas(arbol->izq)+ contarHojas(arbol->der);
	}
}

ABB unirABB(ABB izq,ABB der){
	if(izq==NULL){
		return der;
	}
	if(der==NULL){
		return izq;
	}
	ABB centro= unirABB(izq->der,der->izq);
	izq->der =centro; 
	der->izq =izq;
	return der;
	
}

void menu(){
cout<<"***************************************************"<<endl;
	cout<<"----------------  ARBOL BINARIO  ------------------"<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"1. Ingresar datos\n";
	cout<<"2. Mostrar el arbol\n";
	cout<<"3. Altura del arbol\n";
	cout<<"4. Grado del arbol\n";
	cout<<"5. Calcular LCI \n";
	cout<<"6. Salir\n";
	cout<<"---------------------------------------------------"<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Ingrese su opcion: ";
}

int main(){
	ABB arbol=NULL;
	int x;//dato a insertar en el nodo
	int n;//numero de nodos
	float l;
	int e;
	int op;
	char resp;

	
	do{
		system("color 57");
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
						insertar(arbol,x);
					}
					cout<<"Los datos se guardaron con exito."<<endl;
					cout<<"Desea agregar otro arbol? y/n"<<endl;

					cin>>resp;
				}while(resp == 'y' || resp == 'Y'); 
				system("pause");
				system("cls");
			break;
			case 2:
					cout<<"Mostrar el arbol: "<<endl;
					verarbol(arbol,x);
					cout<<endl;
					system("pause");
					system("cls");
			break;
			case 3:
				cout<<"Altura del arbol: "<<alturaAB(arbol)<<endl;
				system("pause");
				system ("cls");
				break;
			case 4:
				cout<<"El grado de arbol es: "<<endl;				
				cout<<contarHojas(arbol);
				cout<<endl;
				system("pause");
				system("cls");
				break;
			case 5:
					int h;
					int m;
					int cont=0;
					h=alturaAB(arbol);
					
					
					while(h != 0){
						cout<<"Num de nodos en el nivel "<<h<<": "<<nodoN(arbol,h)<<endl;
						m= nodoN(arbol,h) * h;
						cont= cont + m ;
						h--;
					}
					
					cout<<"Valor de LCI: "<<cont<<endl;
					l=cont/n;
				
					system("pause");
					system("cls");
				break;
		}
	}while(op != 6);
	
	return 0;
}
