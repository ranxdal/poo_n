#include "Persona1.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	//atributos
	private : int nit; 
	//constructor
	public : 
	Cliente(){
	}
	
	Cliente(string nom,string ape, string dir,int tel, string fcn) : Persona(nom,ape,dir,tel,fcn){
		nit = n;
	}
	//metodos
	//set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setFechaNacimiento(string fcn){fecha_nacimiento = fcn;}
	
	//get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getFechaNacimiento(){return fecha_nacimiento;}
	
	//metodos
	void mostrar(){
		cout<<"_________________________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<fecha_nacimiento<<endl;
	}
	
};
