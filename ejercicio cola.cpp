#include <iostream>
#include <queue>
#include <conio.h>
#include <cstdlib>


struct Ahorrante{
	char ticket[5];
	int cuenta;
	int edad;
};

using namespace std;
int main(){
	queue<Ahorrante>cola;
	
	Ahorrante aux;
	char resp;
	Ahorrante *puntero;
	int op;
	
do{
cout<<"--------- MENU ----------"<<endl;
cout<<"1. Agregar nodo"<<endl;
cout<<"2. Eliminar nodo"<<endl;
cout<<"3. Mostrar"<<endl;
cout<<"4. Salir"<<endl;
cout<<"Ingrese una opcion:"<<endl;
cin>>op;

switch(op){
	
	case 1:
		do{
		cout<<"Ticket:"<<endl;
		cin>> aux.ticket;
		cout<<"Num Cuenta:"<<endl;
		cin>>aux.cuenta;
		cout<<"Edad: "<<endl;
		cin>>aux.edad;
		
		cola.push(aux);
		puntero =&cola.front();
		cout<<"Quiere agregar otro nodo?y/n"<<endl;
		cin>>resp;
		}while(resp=='y' || resp=='Y');
		system("cls");
		break;
	case 2:
		system("cls");
		cola.pop();
		puntero= &cola.front();
		break;
	case 3:
		system("cls");
		for(int i=1; i<=cola.size();i++)
		{
		aux=*puntero;
		cout<<"Ticket: ";
		cout<<aux.ticket<<endl;
		cout<<"Num cuenta: ";
		cout<<aux.cuenta<<endl;
		cout<<"Edad: ";
		cout<<aux.edad<<endl;
		cout<<"---------------"<<endl;
		puntero++;
		}
		puntero=&cola.front();
		system("pause");
		system("cls");
		break;
}
}while(op!=4);

getch();
return 0;
}
	

