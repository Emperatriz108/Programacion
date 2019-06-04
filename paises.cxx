//Universidad de El Salvador
//Facultad Multidisciplinaria Oriental
//Carrera: INGENIERIA EN SISTEMAS INFORMATICOS
//Nombre: Gema Emperatriz Manzano Machuca
//N° Carnet: MM18024

#include<FL/Fl_Window.H> //agrega el codigo para la ventana
#include<FL/Fl_Box.H> //agrega el codigo para la caja
#include<FL/Fl.H> //agrega la libreria principal
#include<FL/Fl_Window.H> //agrega el codigo para la ventana
#include<FL/Fl_Box.H> //agrega el codigo para la caja
#include<FL/Fl_Button.H> //agrega el codigo para el boton
#include <FL/Fl_Input.H>
#include <FL/fl_message.H>
#include <string>
#include <string.h>
#include <stdlib.h>

class Ventana : public Fl_Window{
Fl_Window *window;
Fl_Box *box;
Fl_Box *background;
Fl_Button *boton;
Fl_Button *boton2;
Fl_Button *boton3;
Fl_Button *boton4;
Fl_Button *boton5;

public:

const char* paises[11] =    {"EEUU",   "Argentina",  "Colombia","Francia",  "El Salvador", "Suiza",
"Indonesia","Rusia","China",   "Belice"}; //contiene los 10 paises de los cuales se eligira el nombre de los botones

const char* capitales[11] = {"Washingtown DC","Buenos Aires","Bogota",  "Paris","San Salvador","Berna",
"Yakarta",  "Moscú",  "Pekín","Belmopan"};

int longitud = 11; 

Ventana():Fl_Window(500,400){
 	begin();
	//////////////// COLORES ///////////////////////
	Fl_Color azul= fl_rgb_color(85,170,255);
	Fl_Color white= fl_rgb_color(255, 255, 255);
	Fl_Color green= fl_rgb_color(171,242,69);
	Fl_Color red= fl_rgb_color(242,121,93);
	Fl_Color magenta= fl_rgb_color(243, 214, 230);
	Fl_Color purple= fl_rgb_color(209, 199, 241);
	/////////////////////////////////////////////////////
	background = new Fl_Box(0,0,510,410," ");
	background->box(FL_FLAT_BOX);
	background->color(white);

	box = new Fl_Box(40,40,450,85,"PAISES DEL MUNDO");
	box->box(FL_RFLAT_BOX);
	box->labelsize(34);
	box->labelfont(FL_BOLD+FL_ITALIC);
	box->labeltype(FL_SHADOW_LABEL);
	box->color(magenta);
	//////////////////-BOTONES-///////////////////////////////////
	
	srand(time(0));

	
	int b1 = rand() %(longitud-1); 
	const char* p1 = paises[b1]; 
	const char* c1 = capitales[b1];
	boton  = new Fl_Button(30,200,120,40,p1);
	boton->color(purple);

	int b2 = rand()%(longitud-2);
	const char* p2 = paises[b2];
	const char* c2 = capitales[b2];
	boton2 = new Fl_Button(200,200,120,40,p2);
	del(p2,(longitud-2));
	boton2->color(purple);

	int b3 = rand()%(longitud-3);
	const char* p3 = paises[b3];
	const char* c3 = capitales[b3];
	boton3 = new Fl_Button(350,200,120,40,p3);
	del(p3,(longitud-3));
	boton3->color(purple);
	
	int b4 = rand()%(longitud-4);
	const char* p4 = paises[b4];
	const char* c4 = capitales[b4];
	boton4 = new Fl_Button(120,290,120,40,p4);
	del(p4,(longitud-4));
	boton4->color(purple);

	int b5 = rand()%(longitud-5);
	const char* p5 = paises[b5];
	const char* c5 = capitales[b5];
	boton5 = new Fl_Button(270,290,120,40,p5);
	boton5->color(purple);

	end();
	boton->callback(Click_CB,(void*)this); 
	boton2->callback(Click_CB,(void*)this);
	boton3->callback(Click_CB,(void*)this);
	boton4->callback(Click_CB,(void*)this);
	boton5->callback(Click_CB,(void*)this);
}

void del(const char* p,int lng){
		for(int i = 0 ; i <= lng ; i++){
			if(p == paises[i]){
				for(int j = i ; j <= lng; j++){
					paises[j] = paises[j+1];
				}
			}
		}
}


//CB ->Callback
static void Click_CB(Fl_Widget *w, void *data){


	if( strcmp(w->label(), "EEUU") == 0 ){
		fl_message("%s", "Washingtown DC"); //%s = string
	};

	if( strcmp(w->label(), "Argentina") == 0 ){
		fl_message("%s", "Buenos Aires"); //%s = string
	};

	if( strcmp(w->label(), "Colombia") == 0 ){
		fl_message("%s", "Bogota");
	};

	if( strcmp(w->label(), "Francia") == 0 ){
		fl_message("%s", "Paris");
	};

	if( strcmp(w->label(), "El Salvador") == 0 ){
		fl_message("%s", "San Salvador");
	};

	if( strcmp(w->label(), "Suiza") == 0 ){
		fl_message("%s", "Berna"); 
	};

	if( strcmp(w->label(), "Indonesia") == 0 ){
		fl_message("%s", "Yakarta"); 
	};

	if( strcmp(w->label(), "Rusia") == 0 ){
		fl_message("%s", "Moscu"); 
	};

	if( strcmp(w->label(),  "China") == 0 ){
		fl_message("%s",  "Pekin");
	};

	if( strcmp(w->label(), "Belice") == 0 ){
		fl_message("%s", "Belmopan"); 
	};
}

};

int main(int argc, char** argv){
	Ventana *v=new Ventana();
	
	v->show(argc,argv);
	return Fl::run();
	
}
