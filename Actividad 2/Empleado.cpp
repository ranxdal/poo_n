#include "Persona1.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona1 {
	//atributos
	private : string codigop,puesto; 
	
	//constructor
	public : 
	Empleado(){
	}
	
	Empleado(string nom,string ape, string dir,string fcn,int tel, string codp, string pst) : Persona1(nom,ape,dir,fcn,tel){
		codigop = codp;
		puesto = pst;
		
	}
	//metodos
	//set (modificar)
	
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFechaNacimiento(string fcn){fena = fcn;}
	void setTelefono(int tel){telefono = tel;}
	void setCodigoPersonal(string codp){codigop = codp;}
	void setPuesto(string pst){puesto = pst;}
	
	
	//get (mostrar)
	
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFechaNacimiento(){return fena;}
	int getTelefono(){return telefono;}
	string getCodigoPersonal(){return codigop;}
	string getPuesto(){return puesto;}
	
	
	//metodos
	void mostrar(){
		cout<<"_________________________________"<<endl;
		cout<<nombres<<","<<apellidos<<","<<direccion<<","<<fena<<","<<telefono<<","<<codigop<<","<<puesto<<endl;
	}
	
};
