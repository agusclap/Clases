/*1. Crear en código c++ una clase Vehículo y luego un vector de dos objetos.

Clase Vehiculo

Luego, crear una clase Principal en donde se declare e inicialice un vector con 2 objetos 
(con los datos del diagrama). Crear y ejecutar las siguientes funciones mostrarListado, buscarPorPatente.
*/

#include <iostream>
#include <string>
#include "Vehiculo.h"

using namespace std;

void mostrarListado(Vehiculo v1, Vehiculo v2);
void buscarPorPatente(Vehiculo v1, Vehiculo v2);

int main(){
    
    Vehiculo v1("auto",5,"123","rojo");
    Vehiculo v2("moto",2,"456","verde");
    char opcion,seguir = ' ';
    do{
        cout<<"MENU DE OPCIONES:"<<endl;
        cout<<"a) Mostrar listado"<<endl;
        cout<<"b) Buscar por patente"<<endl;
        cin>>opcion;
        switch(opcion){
            case 'a':
            {
                mostrarListado(v1,v2);
                break;
            }
            case 'b':
            {
                buscarPorPatente(v1,v2);
                break;
            }
            default:
            {
                cout<<"Ingrese una opcion correcta"<<endl;
            }
        }
        cout<<"Desea continuar con el programa ? y/n"<<endl;
        cin>>seguir;
    }while(seguir=='y' || seguir=='Y');

    return 0;
}

void mostrarListado(Vehiculo v1, Vehiculo v2){
    cout<<"Listado de vehiculos: "<<endl;
    v1.printVehiculo();
    v2.printVehiculo();
}

void buscarPorPatente(Vehiculo v1, Vehiculo v2){
    char cadena[20];
    char cadena1[20];
    cout<<"Ingrese la patente "<<endl;
    cin>>cadena;
    if(v1.getPatente() == cadena){
        v1.printVehiculo();
    } else if(v2.getPatente() == cadena){
        v2.printVehiculo();
    } else{
        cout<<"No existe ningun auto con la patenta ingresada"<<endl;
    }

}