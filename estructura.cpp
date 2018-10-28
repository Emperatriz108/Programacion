//Universidad de El Salvador
//Facultad Multidisciplinaria Oriental
//Carrera: Ingenieria en Sistemas Informaticos
//Asignatura: Programacion I
//Nombre: Gema Emperatriz Manzano Machuca
//Carnet: MM18024
//Fecha de creacion: 18-10-2018
//Descripcion: Crear un programa que pregunte al usuario cuantos empleados tiene 
//Preguntar el codigo, nombre, edad, departamento, puesto y salario de cada empleado
//Y calcular isss, afp, renta, prestamos y salario liquido.
//con estructuras (struct).

//fecha de creacion: 18/10/2018

#include <iostream>//Libreria a utilizar para entrada y salida de datos

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
//Estructura:
//La estructura es una colección de variables de diferentes tipos de datos bajo un solo nombre.

//Para este ejercicio se va a utilizar una estructura "Empleado".
//En esta se va a almacenar los datos para el empleado.
struct Empleado{
	char cod[5];
	char nombre[50];
	int edad;
	float salbase;
	float salliquido;
	float isss;
	float afp;
	float renta;
	float totalprestamos;
	char departamento[60];
	char puesto[60];
	
	
};

//Estrucura para la Sucursal
//Almacenamos el numero y nombre de la sucursal.
struct Sucursal{
	int numsucursal;
	char nombresucursal[60];
};

//funcion para calcular isss

float calisss(float sal, float tope){
	float isss=0;
	if(sal >= 600){
		isss=30;
	}
	else{
		isss= sal * 0.03;
	}
	
	return isss;
}

//funcion para calcular afp

float calafp(float sal, float tope){
	float afp=0;
	 
	afp = sal * 0.0725;
	
	return afp;
}

//funcion para calcular la renta

float calrenta(float sal){
	float renta=0;
	 
	if(sal>=0.01 && sal<= 472){
 
	}
	else if(sal > 472 && sal <= 895.24){
		renta = sal * 0.10 ;

	}
	else if(sal > 895.24 && sal <= 2038.10){
		renta = sal * 0.20;

	}
	else if(sal > 2038.10){
		renta = sal * 0.30;
	}
	
	return renta;
}

int main(int argc, char** argv) {
	int n;
	
cout<<"¿cuantos empleados tiene?"<<endl;
cin>>n;
Empleado e[n];
Sucursal s;

for(int i=0;i<n;i++){
	cout<<"Cod: ";
	cin>>e[i].cod;
	cout<<"Nombre: ";
	cin>>e[i].nombre;
	fflush(stdin);
	cout<<"Edad: ";
	cin>>e[i].edad;
	cout<<"Sucursal: ";
	cin>>s.nombresucursal;
	cout<<"Num. Sucursal: ";
	cin>>s.numsucursal;
	cout<<"Salario: $";
	cin>>e[i].salbase;
	cout<<"Departamento: ";
	cin>>e[i].departamento;
	fflush(stdin);
	cout<<"Puesto: ";
	cin>>e[i].puesto;
	fflush(stdin);
	e[i].isss=calisss(e[i].salbase,0.03);
	
	//afp
	e[i].afp=calafp(e[i].salbase,0.0725);
	//renta
	
	e[i].renta = calrenta(e[i].salbase);
	
	//Prestamos
	float cp;
	cout << "Cantidad de prestamos del empleado:"<<endl;
	cin>>cp;

	float prest;
	
	if(cp < 5){
	
		if(cp == 1){
		prest= e[i].salbase * 0.05;
		} 
		else if(cp == 2){
		prest = e[i].salbase * 0.10;
		}
		else if(cp ==3){
		prest= e[i].salbase * 0.15;
		}
		else if(cp==4){
		 e[i].salbase*0.2 ;
		}
	}
	else{
	
		cout<<"Ya no puede realizar mas prestamos";
	}

	e[i].totalprestamos = prest;

	e[i].salliquido = e[i].salbase - ( e[i].isss + e[i].afp + e[i].renta + e[i].totalprestamos) ;
}

//imprimir en pantalla
for(int i=0;i<n;i++){
	cout<<"-------Empleado "<<i+1<<"--------"<<endl;
	cout<<"Cod: "<<e[i].cod<<"\t"<<endl;
	cout<<"Nombre: "<<e[i].nombre<<"\t"<<endl;
	cout<<"Edad: "<<e[i].edad<<"\t"<<endl;
	cout<<"Departamento: "<<e[i].departamento<<"\t"<<endl;
	cout<<"Puesto: "<<e[i].puesto<<"\t"<<endl;
	cout<<"SalBase: $"<<e[i].salbase<<"\t"<<endl;
	cout<<"ISSS: $"<<e[i].isss<<"\t"<<endl;
	cout<<"AFP: $"<<e[i].afp<<"\t"<<endl;
	cout<<"Renta: $"<<e[i].renta<<"\t"<<endl;
	cout<<"Prestamo: $"<<e[i].totalprestamos<<"\t"<<endl;
	cout<<"Salario Liquido: $"<<e[i].salliquido<<"\t"<<endl;
}
	return 0;
}
