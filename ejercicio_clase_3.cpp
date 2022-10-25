/*3. Crear una clase Mascota con sus atributos (tipo_animal, raza, nombre_mascota, persona_resposable_edad) y métodos (setter(), getter() y toString()). 
Luego, crear una clase Principal en donde se declare un vector de objetos Mascota.
 Luego llenar este vector con datos y llamar a las  funciones mostrarListado y MostrarListado por tipo_animal. Hacer el diagrama de clase de Libro.
 */



#include <iostream>
#include <string>
#include "Mascota.h"
using namespace std;

void mostrarListado(Mascota m,Mascota m_array[5], int);
void MostrarListado(Mascota m,Mascota m_array[5], int);

int main(){
    Mascota m;
    Mascota m_array[5];
    int cantidad,edad = 0;
    char opcion,seguir = ' ';
    string animal,raza,nombre = " ";
    cout<<"Cuantas mascotas quiere agregar ? (MAX 5)"<<endl;
    cin>>cantidad;
    if(cantidad>5){
        cout<<"Numero excedido de mascotas a ingresar"<<endl;
        exit(0);
    }
    for(int i=0;i<cantidad;i++){
        cout<<"Ingrese el tipo de la mascota"<<endl;
        cin>>animal;
        m_array[i].setTipo(animal);
        cout<<"Ingrese la raza de la mascota"<<endl;
        cin>>raza;
        m_array[i].setRaza(raza);
        cout<<"Ingrese el nombre de la mascota"<<endl;
        cin>>nombre;
        m_array[i].setNombre(nombre);
        cout<<"Ingrese la edad de la persona a cargo del animal"<<endl;
        cin>>edad;
        m_array[i].setEdadPersona(edad);
    }


    do{
        cout<<"MENU DE OPCIONES:"<<endl;
        cout<<"a) Mostrar listado de Mascotas"<<endl;
        cout<<"b) Mostrar listado por tipo de animal"<<endl;
        cin>>opcion;
        switch(opcion){
            case 'a':
            {
                mostrarListado(m,m_array,cantidad);
                break;
            }
            case 'b':
            {
                MostrarListado(m,m_array,cantidad);
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

void mostrarListado(Mascota m,Mascota m_array[5],int cantidad){

    for(int i=0;i<cantidad;i++){
        cout<<"Mascota "<<i+1<<":"<<endl;
        m_array[i].printMascotas();
    }

}

void MostrarListado(Mascota m, Mascota m_array[5], int cantidad){
    string tipo = " ";
    cout<<"Ingrese el tipo de animal"<<endl;
    cin>>tipo;
    for(int i=0;i<cantidad;i++){
        if(tipo==m_array[i].getTipo()){
            m_array[i].printMascotas();
        }
    }
    
}