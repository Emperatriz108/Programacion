#include <iostream>
#include <string.h>
#ifndef MISCLASES_H
#define MISCLASES_H
using namespace std;

class Deduciones{
	private:
		int cod;
		string tipo;
		float total;
		
	public:
		void setCod(int Cod){
			this->cod=Cod;
		}
		
		int getCod(){
			return this->cod;
		}
		
		void setTipo(string t){
			this->tipo=t;
		}
		
		string getTipo(){
			return this->tipo;
		}
		
		void setTotal(int TL){
			this->total=TL;
		}
		
		float getTotal(){
			return this->total;
		}
		
		virtual float getCalculo(float salario)=0;
	
};

class Interface{
	public:
		virtual float getCalculo(float salario)=0;
};

class ISSS:public Interface{
	public:
	float getCalculo(float salario){
		float isss=0;
		
		if(salario>600){
			isss=600*0.03f;
			
		}
		else{
			isss=salario*0.03f;
		} 
		return isss;
	}
};

class Renta:public Interface{
	public:
		float getCalculo(float salario){
			float renta=0;
			
			if(salario>=0.01 && salario<= 472){
	 			
			}
			else if(salario > 472 && salario <= 895.24){
				renta = salario * 0.10 ;
		
			}
			else if(salario > 895.24 && salario <= 2038.10){
				renta = salario * 0.20;
		
			}
			else if(salario > 2038.10){
				renta = salario * 0.30;
			}
		
		return renta;
	}
};

class AFP:public Interface{
	public:
		float getCalculo(float salario){
			float afp=0;
	 
			afp = salario * 0.0725;
	
	return afp;
	}
};
#endif

