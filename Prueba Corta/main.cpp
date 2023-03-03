#include "Propietario.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,fena;
	int telefono;
	double cui;
	
	cout<<"Ingresar NIT: ";
	cin>>nit;
	cout<<"Ingresar CUI: ";
	cin>>cui;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	cout<<"Ingresar Fecha de Nacimiento: ";
	cin>>fena;
	//instancia de un objeto
	Propietario obj = Propietario(nombres,apellidos,direccion,telefono,fena,nit,cui);
	obj.mostrar();
	
}
