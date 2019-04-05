//Universidad de El Salvador
//Ingenieria de sistemas informaticos
//Nombre: Gema Emperatriz Manzano Machuca
//Fecha de creacion: 04-04-2019
#include <iostream>
#include <conio.h>
using namespace std;

class Figura{
	private:
		float base;
		float altura;
  	
  	public:
  		
  		
  		Figura(){
  			this->base=0;
  			this->altura=0;
		}
		
		Figura(float b, float a){
  			this->base=b;
  			this->altura=a;
		}
	 	void setbase(float b){
	  		this->base=b;
	  	} 
	  
	 	float getbase(){
	  	return this->base;
	  }
	  	void setaltura(float a){
	  		this->altura=a;
	  	} 
	  
	 	float getaltura(){
	  	return this->altura;
	  }
	  	
	  	virtual float area()=0;
	  	virtual float perimetro()=0;
};

class Color{
	public:
		void Colorear(){
			cout<<" Estoy pintando"<<endl;
		}
};

class Rectangulo: public Figura, public Color{
	public:
		
		float area(){
			return (getbase()*getaltura());
		}
		
		float perimetro(){
			return  ((2*getbase()) + (2*getaltura()));	
		}
		
		void ImprimirR(){
			
			for(int a=0; a<getaltura(); a++) { 
				for(int b=0; b<getbase(); b++) { 
					if(a==0 || a==getaltura()-1){ 
					cout<<"* "; 
					} 
					else if((a>0 && a<getaltura()-1) && b==0 || (a>0 && a<getaltura()-1) && b==getbase()-1){ 
					cout<<"* "; 
					} 
					else{ 
					cout<<"  "; 
					} 
				
				} 
			cout<<"\n"; 
			} 
		
		}
};
//Los constructores no puede tener paramentro del mismo tipo 

class Cuadrado:public Figura{
	public:
		
		float area(){
			return (getbase()*getaltura());
		}
		
		float perimetro(){
			return  4*getbase();	
		}
		
		void ImprimirC(){
			for(int a=0; a<getaltura(); a++) { 
				for(int b=0; b<getbase(); b++) { 
					if(a==0 || a==getaltura()-1){ 
					cout<<"* "; 
					} 
					else if((a>0 && a<getaltura()-1) && b==0 || (a>0 && a<getaltura()-1) && b==getbase()-1){ 
					cout<<"* "; 
					} 
					else{ 
					cout<<"  "; 
					} 
				
				} 
			cout<<"\n"; 
			} 
		
		}
};

class TrianguloE:public Figura{
	public:
		
		float area(){
			return (getbase()*getaltura())/2;
		}
		
		float perimetro(){
			return  3*getbase();	
		}
		
	void ImprimirT(){
		
			for(int i = 0; i < getbase(); i++){
				int x = getbase()-i;
				for(int j = 0; i >= j; j++){
					
						while(x != 0){
							cout << " ";
							x--;
						}
						cout << "* ";				
				}
				cout << endl;
			}
			}
		
};




class Principal{
	public:
		Principal(){
			
			cout<<"--------------RECTANGULO-------------"<<endl;
			Rectangulo *r =new Rectangulo;
	
			r->setbase(6);
			r->setaltura(4);
			cout<<"Base: "<<r->getbase()<<"  Altura: "<<r->getaltura()<<endl;
			cout<<"Area: "<<r->area()<<endl;
			cout<<"Perimetro: "<<r->perimetro()<<endl;
			cout<<"FIGURA: "<<endl;
			r->ImprimirR();
			r->Colorear();
			
			cout<<"--------------CUADRADO-------------"<<endl;
			Cuadrado *c = new Cuadrado;
			c->setbase(5);
			c->setaltura(5);
			cout<<"Area: "<<c->area()<<endl;
			cout<<"Perimetro: "<<c->perimetro()<<endl;
			cout<<"Base: "<<c->getbase()<<"  Altura: "<<c->getaltura()<<endl;
			cout<<"FIGURA: "<<endl;
			c->ImprimirC();
			
			cout<<"--------------TRIANGULO-------------"<<endl;
			TrianguloE *t = new TrianguloE;
			t->setbase(4);
			t->setaltura(6);
			cout<<"Base: "<<t->getbase()<<"  Altura: "<<t->getaltura()<<endl;
			cout<<"Area: "<<t->area()<<endl;
			cout<<"Perimetro: "<<t->perimetro()<<endl;
			cout<<"FIGURA: "<<endl;
			t->ImprimirT();
			
		}
};

int main(){
	//Figura *t = new Figura(0,0);//instanciar un objeto de una clase;declara(m1)
	//t->setbase(4);
	//cout<<t->getbase();
	//t->setaltura(5);
	//cout<<t->setaltura();
	Principal *pro=new Principal;
	
	
	
	getch();
	return 0;
}

void menu(){
	cout<<"-------------MENU------------"<<endl;
	cout<<"1. Rectangulo"<<endl;
	cout<<"2. Cuadrado"<<endl;
	cout<<"3. Triangulo"<<endl;
	cout<<"4. Salir"<<endl;
}


