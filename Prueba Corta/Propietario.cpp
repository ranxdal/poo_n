#include "Persona.cpp"
#include <iostream>

using namespace std;

class Propietario : Persona{
	//atributos
	private : string nit;
			  double cui;
	//costructor
	public: 
	
	Propietario(){
		
	}
 
	Propietario(string nom,string ape,string dir,int tel,string fcn,string n, double c) : Persona(nom,ape,dir,tel,fena){
		nit = n;
		cui = c;	
    }
    
    //metodos
	//set (modificar)
	void setNit(string n){nit = n;}
	void setCui(double c){cui = c;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setFechaNacimiento(string fcn){fena = fcn;}

	
	
	//get (mostrar)
	string getNit(){return nit;}
	double getCui(){return cui;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getFechaNacimiento(){return fena;}

	
	
	//metodos
	void mostrar(){
		cout<<"**********************"<<endl;
		cout<<"NIT: "<<nit<<endl;
		cout<<"CUI: "<<cui<<endl;
		cout<<"NOMBRES: "<<nombres<<endl;
		cout<<"APELLIDOS: "<<apellidos<<endl;
		cout<<"DIRECCION: "<<direccion<<endl;
		cout<<"TELEFONO: "<<telefono<<endl;
		cout<<"FECHA DE NACIMIENTO: "<<fena<<endl;

	}
	
	void agregar(){
		cout<<"Metodo Agregar"<<endl;
	}
	/*
	void mostrar(){
		cout<<"Metodo Mostrar"<<endl;
	}*/
	
	
	
};
