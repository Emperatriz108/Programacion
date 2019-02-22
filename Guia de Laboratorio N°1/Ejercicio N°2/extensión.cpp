#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
void Intercambio(int, int);
void Intercambio(int *, int *);
void Intercambio(int, int &, int &);

int main() {
 int x = 22, y = 33;
 printf("x = %d\t y = %d\n", x, y);
 Intercambio(x,y); // llamada por valor
 printf("x = %d\t y = %d\n", x, y);

 Intercambio(1, x, y); // llamada por referencia
 printf("x = %d\t y = %d\n", x, y);
 Intercambio(&x, &y); // llamada por puntero
 printf("x = %d\t y = %d\n", x, y);
 cout<<&x<<endl;
 
 getch();
}

void Intercambio( int a, int b)
{
 int aux;
 aux = a;
 a = b;
 b = aux;
}
void Intercambio(int *a, int *b)
{
 int aux;
 aux = *a;
 *a = *b;
 *b = aux;
}
void Intercambio( int i, int &a, int &b)
{
 int aux=i;
 aux = a;
 a = b;
 b = aux;
}

