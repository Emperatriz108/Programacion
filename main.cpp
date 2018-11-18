#include <cstdlib>
#include <iostream>
#include <winsock2.h>
#include <mysql.h>
#include <mysqld_error.h>
using namespace std;

void b();
int menu();
int main(int argc, char *argv[])
{  
	MYSQL *conn;
    MYSQL  mysql;
    MYSQL_RES *res;
    MYSQL_ROW row;
    mysql_init(&mysql);
    conn=mysql_real_connect(&mysql,"localhost","root","","clientes",0,0,0);
    
	cout<<"++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"<<<<<<<<<<<<<<<< MENU >>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++"<<endl;
	int m;
    menu();
    cin>>m;
    b();
    
    switch (m)
	{
		case 1:
		
		    if(conn==NULL)
		    {  cout<<mysql_error(&mysql)<<endl;
		       system("pause");
		     /// return 1;
		        
		    }
		    mysql_query(conn,"select * from clientes");
		    res=mysql_store_result(conn);
		    
			cout<<"CodClientes---- Nombre ----- Apellido ------Telefono-----"<<endl;
		    while((row=mysql_fetch_row(res))!=NULL)
		    {
		    	
		        cout<<row[0]<<"\t";
		        cout<<row[1]<<"\t";
		        cout<<row[2]<<"\t";
		        cout<<row[3]<<endl;
		    }
		   // mysql_real_connect(obj,NULL,'root','','practica2',3306,NULL,0);
		   mysql_close(conn);
		    cout<<"se conecto"<<endl;
		    system("pause");
		    
		case 2:
			
			if(conn==NULL)
		    {  cout<<mysql_error(&mysql)<<endl;
		       system("pause");
		     /// return 1;
		        
		    }
		    mysql_query(conn,"select * from producto");
		    res=mysql_store_result(conn);
		    
		    cout<<"CodProducto---- Nombre ----- Preci0 ------"<<endl;
		    while((row=mysql_fetch_row(res))!=NULL)
		    {
		        cout<<row[0]<<"\t";
		        cout<<row[1]<<"\t";
		        cout<<row[2]<<"\t";
		        cout<<row[3]<<endl;
		    }
		 
		   	mysql_close(conn);
		    system("pause");
		    
		case 3:
			if(conn==NULL)
			
		    {  cout<<mysql_error(&mysql)<<endl;
		       system("pause");
		        
		    }
		    mysql_query(conn,"select * from cotizaciones");
		    res=mysql_store_result(conn);
		    cout<<"CodCotizacion-- CodProducto --- CodCliente ---Fecha-----"<<endl;
		    while((row=mysql_fetch_row(res))!=NULL)
		    {
		        cout<<row[0]<<"\t";
		        cout<<row[1]<<"\t";
		        cout<<row[2]<<"\t";
		        cout<<row[3]<<endl;
		    }
		   
		   mysql_close(conn);
		    system("pause");
		    
		default:
			cout<<"<<<<<<<< Adios que tenga un buen dia >>>>>>>>>>>>"<<endl;	
			
    }
	return 0;

}

int menu ()
{
	cout << "1. Clientes." << endl;
	cout << "2. Productos cotizados." << endl;
	cout << "3. Cotizaciones"<<endl;
	cout << "4. Salir." << endl;
	
	system ("color f8")	; //color	
}

void b ()
{
	system ("cls"); //borrar

}
