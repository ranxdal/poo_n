#include "Persona1.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona {
	//atributos
	private : int nit,codigop; 
	string puesto; 
	//constructor
	public : 
	Empleado(){
	}
	
	Empleado(string nom,string ape, string dir,int tel, string fcn) : Persona(nom,ape,dir,tel,fcn){
		nit = n;
		codigop = codp;
		puesto = pst;
		
	}
	//metodos
	//set (modificar)
	void setNit(string n){nit = n;}
	void setCodigoPersonal(int codp){codigop = codp;}
	void setPuesto(string pst){puesto = pst;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setFechaNacimiento(string fcn){fecha_nacimiento = fcn;}
	
	//get (mostrar)
	string getNit(){return nit;}
	int getCodigoPersona(){return codp;}
	string getPuesto(){retunr pst;}
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
