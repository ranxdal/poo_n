#include "Cliente1.cpp"
#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar NIT: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar fecha de nacimiento";
	cin<<fena
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	
	//instancia de un objeto
	Cliente1 obj = Cliente1(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	//cout<<"Datos del Cliente: "<<obj.getNit()<<", "<<obj.getNombres()<<", "<<obj.getApellidos()<<", "<<obj.getDireccion()<<", "<<obj.getTelefono()<<", ";
	
	
	
	
	/*Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
}