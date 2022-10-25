#include <iostream>
#include <string>
using namespace std;

class Mascota{

private:
    string tipo_animal;
    string raza;
    string nombre_mascota;
    int persona_resposable_edad;
public:
    Mascota();
    void setTipo(string);
    string getTipo();
    void setRaza(string);
    string getRaza();
    void setNombre(string);
    string getNombre();
    void setEdadPersona(int);
    int getEdadPersona();
    void printMascotas();
    ~Mascota();
    string toString();

};

void Mascota::setTipo(string t){
    tipo_animal = t;
}

string Mascota::getTipo(){
    return tipo_animal;
}

void Mascota::setRaza(string r){
    raza = r;
}

string Mascota::getRaza(){
    return raza;
}

void Mascota::setNombre(string n){
    nombre_mascota = n;
}

string Mascota::getNombre(){
    return nombre_mascota;
}

void Mascota::setEdadPersona(int s){
    persona_resposable_edad=s;
}

int Mascota::getEdadPersona(){
    return persona_resposable_edad;
}
void Mascota::printMascotas(){
    cout<<"Mascota: "<<endl;
    cout<<"Tipo de animal: "<<tipo_animal<<endl;
    cout<<"Raza del animal: "<<raza<<endl;
    cout<<"Nombre de la mascota: "<<nombre_mascota<<endl;
    cout<<"Edad de la persona responsable: "<<persona_resposable_edad<<endl;
}

string Mascota::toString(){
	string cadena=tipo_animal+"\t\t"+"\t\t"+raza+"\t\t"+nombre_mascota+"\t\t"+std::to_string(persona_resposable_edad);
	return cadena;
}