#include <iostream>
using namespace std; 
class Persona{
	//atributos
	protected : string nombres,apellidos,direccion,fena;
				int telefono;
	//constructor
	protected :
			Persona(){
			}
			Persona(string nom,string ape,string dir,string fcn,int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				fena = fcn;
				telefono = tel;
			}
			
	//metodo
	void mostrar();
	void crear();
	void leer();
	void actualizar();
	void borrar();
};
