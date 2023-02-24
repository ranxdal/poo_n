#include "Persona1.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	//atributos
	private : string nit; 
	//constructor
	public : 

	Cliente(string nom,string ape,string dir,string fcn,int tel,string n) : Persona(nom,ape,dir,fcn,tel){
		nit = n;
	}
	//metodos
	//set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFechaNacimiento(string fcn){fena = fcn;}
	void setTelefono(int tel){telefono = tel;}
	
	
	//get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFechaNacimiento(){return fena;}
	int getTelefono(){return telefono;}
	
	
	//metodos
	void mostrar(){
		cout<<"_________________________________"<<endl;
		cout<<"NIT: "<<nit<<endl;
		cout<<"NOMBRES: "<<nombres<<endl;
		cout<<"APELLIDOS: "<<apellidos<<endl;
		cout<<"DIRECCION: "<<direccion<<endl;
		cout<<"FECHA DE NACIMIENTO: "<<fena<<endl;
		cout<<"TELEFONO: "<<telefono<<endl;
	}
	
	void crear(){
		cout<<"Metodo crear de Cliente"<<endl;
	}
	
	void leer(){
		cout<<"Metodo leer de Cliente"<<endl;
	}
	
	void actualizar(){
		cout<<"Metodo de actualizar de Cliente"<<endl;
	}
	
	void borrar(){
		cout<<"Metodo borrar de Cliente"<<endl;
	}
	
};
