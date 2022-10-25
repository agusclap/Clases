#include <iostream>
#include <string>
using namespace std;

class Actividad {

private:
    string nombre;
    int cupo;
    string dias;
    string horario;
    int cant_inscriptos;

public:
    void setNombre(string);
    string getNombre();
    void setCupo(int);
    int getCupo();
    void setDias(string);
    string getDias();
    void setHorario(string);
    string getHorario();
    void setCantidad(int);
    int getCantidad();
    void printActividad();
    Actividad();
    ~Actividad();
};

Actividad::Actividad(){
}

void Actividad::setNombre(string n){
    nombre = n;
}

string Actividad::getNombre(){
    return nombre;
}

void Actividad::setCupo(int c){
    cupo = c;
}

int Actividad::getCupo(){
    return cupo;
}

void Actividad::setDias(string d){
    dias = d;
}

string Actividad::getDias(){
    return dias;
}

void Actividad::setHorario(string h){
    horario = h;
}

string Actividad::getHorario(){
    return horario;
}

void Actividad::setCantidad(int c){
    cant_inscriptos = c;
}

int Actividad::getCantidad(){
    return cant_inscriptos;
}

Actividad::~Actividad(){
}

void Actividad::printActividad(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Cupo: "<<cupo<<endl;
    cout<<"Dias en la semana: "<<dias<<endl;
    cout<<"Horario: "<<horario<<endl;
    cout<<"Cantidad inscriptos: "<<cant_inscriptos<<endl;
}
