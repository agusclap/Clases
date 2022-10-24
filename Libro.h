#include <iostream>
#include <string>
using namespace std;
class Libro{
private:
    string nombre;
    string category;
    int stock;
    float precio;
    string autor;
public:
    Libro();
    void setNombre(string);
    string getNombre();
    void setCategory(string);
    string getCategory();
    void setStock(int);
    int getStock();
    void setPrecio(float);
    float getPrecio();
    void setAutor(string);
    string getAutor();
    void printLibros();
    ~Libro();


};

Libro::Libro(){

}

void Libro::setNombre(string n){
    nombre = n;    
}

string Libro::getNombre(){
    return nombre;
}

void Libro::setCategory(string c){
    category = c;
}

string Libro::getCategory(){
    return category;
}

void Libro::setStock(int s){
    stock = s;
}

int Libro::getStock(){
    return stock;
}

void Libro::setPrecio(float p){
    precio = p;
}

float Libro::getPrecio(){
    return precio;
}

void Libro::setAutor(string a){
    autor = a;
}

string Libro::getAutor(){
    return autor;
}

void Libro::printLibros(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Categoria: "<<category<<endl;
    cout<<"Stock: "<<stock<<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<<"Autor: "<<autor<<endl;
}

Libro::~Libro(){
    cout<<"Ejecutando destructor"<<endl;
}
