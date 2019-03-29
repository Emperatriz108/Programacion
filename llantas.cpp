#include <iostream>
#include <stack>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input
loop */
using namespace std;
struct Llantas{
int codigo;
char modelo[20];
char marca[20];
char tamanio[25];
};
int main(int argc, char** argv) {
stack<Llantas> pila_llantas;
Llantas aux;
char resp;
Llantas *puntero;
int opcion;
do{
cout<<"MENU"<<endl;
cout<<"1-Agregar nodo"<<endl;
cout<<"2-Eliminar nodo"<<endl;
cout<<"3-Mostrar pila de datos"<<endl;
cout<<"4-Buscar"<<endl;
cout<<"5-Salir"<<endl;
cout<<"Ingrese una opcion:"<<endl;
cin>>opcion;
switch(opcion)
{
case 1:
do{
cout<<"Cod:"<<endl;
cin>>aux.codigo;
cout<<"modelo:"<<endl;
cin>>aux.modelo;
cout<<"marca:"<<endl;
cin>>aux.marca;
cout<<"tamaño:"<<endl; 
cin>>aux.tamanio;
pila_llantas.push(aux);
puntero=&pila_llantas.top();
cout<<"Quiere agregar otro nodo?y/n"<<endl;
cin>>resp;
}while(resp=='y' || resp=='Y');
system("cls");
break;
case 2:
pila_llantas.pop();
puntero=&pila_llantas.top();
break;
case 3:
system("cls");
for(int i=1; i<=pila_llantas.size();i++)
{
aux=*puntero;
cout<<aux.codigo<<endl;
cout<<aux.modelo<<endl;
cout<<aux.marca<<endl;
cout<<aux.tamanio<<endl;
puntero--;
}
puntero=&pila_llantas.top();
break;
case 4:
int codbuscar;
system("cls");
cout<<"Cod:"<<endl;
cin>>codbuscar;
for(int i=1; i<=pila_llantas.size();i++)
{
aux=*puntero;
if(codbuscar==aux.codigo){
cout<<aux.codigo<<endl;
cout<<aux.modelo<<endl;
cout<<aux.marca<<endl;
cout<<aux.tamanio<<endl;
}
puntero--;
} 
puntero=&pila_llantas.top();
}
}while(opcion!=5);

getch();
return 0;
}
