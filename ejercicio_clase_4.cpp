/*4. Crear una clase Actividad, las mismas corresponden a las actividades de un gym.
 Atributos: nombre, cupo, dias de la semana, horario, cant_inscriptos. 
 Funciones: mostrar, buscar, mostrar actividades que aun no tienen el cupo lleno.*/


#include <iostream>
#include <string.h>
#include "Actividad.h"
using namespace std;

void buscarActividad(Actividad a_array[5], int);
void mostrarActividad(Actividad a_array[5], int);





int main(){
    char opcion,seguir = ' ';
    Actividad a;
    Actividad a_array[5];
    string nombre = " ";
    cout<<"Ingrese la cantidad de actividades a agregar"<<endl;
    int cant=0;
    cin>>cant;
    string dias;
    string horario;
    int cupo, cant_inscriptos = 0;
    for(int i=0;i<cant;i++){
        cout<<"Ingrese el nombre de la actividad"<<endl;
        cin>>nombre;
        a_array[i].setNombre(nom);
        cout<<"Ingrese la cantidad en ese cupo (MAX 15)"<<endl;
        cin>>cupo;
        a_array[i].setCupo(cupo);
        cout<<"Ingrese dias de la semana"<<endl;
        cin>>dias;
        a_array[i].setDias(dias);
        cout<<"Ingrese el horario de la actividad"<<endl;
        cin>>horario;
        a_array[i].setHorario(horario);
        cout<<"Ingrese la cantidad de inscriptos a esa actividad"<<endl;
        cin>>cant_inscriptos;
        a_array[i].setCantidad(cant_inscriptos);
    }
    do{
        cout<<"MENU DE OPCIONES:"<<endl;
        cout<<"a) Mostrar"<<endl;
        cout<<"b) Buscar"<<endl;
        cout<<"c) Mostrar Actividades que no tienen el cupo lleno"<<endl;
        cin>>opcion;
        switch(opcion){
            case 'a':
            {
                for(int i=0;i<cant;i++){
                    cout<<"Actividad "<<i+1<<":"<<endl;
                    a_array[i].printActividad();
                }
                break;
            }
            case 'b':
            {
                buscarActividad(a_array,cant);
                break;
            }
            case 'c':
            {
                mostrarActividad(a_array,cant);

                break;
            }
            default:
            {
                cout<<"Ingrese una opcion corecta"<<endl;
            }
        }
        cout<<"Desea continuar con el programa ? y/n"<<endl;
        cin>>seguir;
    }while(seguir == 'y' || seguir=='Y');

    return 0;
}

void buscarActividad(Actividad a_array[5], int cant){
    string nombre = " ";
    cout<<"Ingrese el nombre de la actividad"<<endl;
    cin>>nombre;
    for(int i=0;i<cant;i++){
        if(nombre.compare(a_array[i].getNombre()) == 0){
            a_array[i].printActividad();
        }
    }
}

void mostrarActividad(Actividad a_array[5], int cant){
    string nombre = " ";
    cout<<"Ingrese el nombre de la actividad a buscar"<<endl;
    cin>>nombre;
    for(int i=0;i<cant;i++){
        if((nombre==a_array[i].getNombre()) && (a_array[i].getCupo()<15)){
            a_array[i].printActividad();
        }
    }
}
