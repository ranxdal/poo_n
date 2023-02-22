#include <iostream>
using namespace std; 
class Persona1{
	//atributos
	protected : string nombres,apellidos,direccion,fena;
				int telefono;
	//constructor
	protected :
			Persona1(){
			}
			Persona1(string nom,string ape,string dir,string fcn,int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				fena = fcn;
				telefono = tel;
			}
			
	//metodo
	void mostrar();
};
