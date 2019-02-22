#include <iostream>

using namespace std;

void DemoLocal( int valor );



int main( )
{
 int n = 10;
 int m;
 cout << "Antes de llamar a DemoLocal, n= " << n << endl;
 DemoLocal(n);
 
 cout << "Despues de llamar a DemoLocal, n= " << n<<endl;
 cout << "Pulse Intro para continuar";
 

 return 0;
}

void DemoLocal(int valor)
{
 cout << "Dentro de DemoLocal, valor = " << valor << endl;
 valor = 75;
 cout << "Dentro de DemoLocal, valor = " << valor << endl;
}


