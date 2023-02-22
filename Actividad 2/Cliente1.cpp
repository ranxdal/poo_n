#include "Persona1.cpp"
#include <iostream>
using namespace std;

class Cliente1 : Persona1 {
	//atributos
	private : string nit; 
	//constructor
	public : 
	Cliente1(){
	}
	
	Cliente1(string nom,string ape,string dir,string fcn,int tel,string n) : Persona1(nom,ape,dir,fcn,tel){
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
		cout<<nit<<" , "<<nombres<<" , "<<apellidos<<" , "<<direccion<<" , "<<fena<<" , "<<telefono<<endl;
	}
	
};
