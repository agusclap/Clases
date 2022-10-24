#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
	
private:
	string tipo;
	int capacidad;
	string patente;
	string color;
	
public:
	Vehiculo(string,int,string,string);
	void setTipo(string);
	string getTipo();
	void setCapacidad(int capacidad);
	int getCapacidad();
	void setPatente(string patente);
	string getPatente();
	void setColor(string color);
	string getColor();
	string toString();
	void printVehiculo();
	~Vehiculo();
	
	
};

void Vehiculo::setTipo(string t){
	tipo = t;

}

string Vehiculo::getTipo(){
	
	return tipo;
}

void Vehiculo::setCapacidad(int c){
	capacidad = c;
}

int Vehiculo::getCapacidad(){
	return capacidad;
}

void Vehiculo::setPatente(string p){
	patente = p;
}

string Vehiculo::getPatente(){
	return patente;
}

void Vehiculo::setColor(string col){
	color = col;
}

string Vehiculo::getColor(){
	return color;
}

string Vehiculo::toString(){

}

void Vehiculo::printVehiculo(){
	cout<<"Tipo: "<<tipo<<endl;
	cout<<"Capacidad: "<<capacidad<<endl;
	cout<<"Patente: "<<patente<<endl;
	cout<<"Color: "<<color<<endl;
	

}

Vehiculo::Vehiculo(string a,int b,string c,string d){
	tipo = a;
	capacidad = b;
	patente = c;
	color = d;
	cout<<"Se creo un objeto nuevo"<<endl;
}

Vehiculo::~Vehiculo(){
	cout<<"Ejecutando el destructor"<<endl;
}



