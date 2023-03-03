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
			Persona(string nom,string ape, string dir, int tel, string fcn){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
				fena = fcn;
		
			}
			
	//metodo
	void agregar();
	void mostrar();
};
