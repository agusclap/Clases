#include <iostream>
#include <string>
#include "Libro.h"
using namespace std;

void mostrarListado(Libro l, Libro l_array[4]);
void calcularSumaPrecio(Libro l, Libro l_array[4]);

int main(){
    string nombre,category,autor = " ";
    int stock = 0;
    float precio = 0;
    Libro l;
    Libro l_array[4];
    for(int i=0;i<4;i++){
        cout<<"Ingrese el nombre del libro"<<endl;
        cin>>nombre;
        l.setNombre(nombre);
        cout<<"Ingrese la categoria del libro"<<endl;
        cin>>category;
        l.setCategory(category);
        cout<<"Ingrese stock del libro"<<endl;
        cin>>stock;
        l.setStock(stock);
        cout<<"Ingrese el precio del libro"<<endl;
        cin>>precio;
        l.setPrecio(precio);
        cout<<"Ingrese el nombre del autor del libro"<<endl;
        cin>>autor;
        l.setAutor(autor);
        l_array[i] = l;
    }
    mostrarListado(l,l_array);
    calcularSumaPrecio(l,l_array);

    return 0;
}

void mostrarListado(Libro l, Libro l_array[4]){
    cout<<"Listado de libros"<<endl;
    for(int i=0;i<4;i++){
        cout<<endl<<"Libro "<<i+1<<":"<<endl;
        l_array[i].printLibros();
        cout<<endl;
    }
}

void calcularSumaPrecio(Libro l, Libro l_array[4]){
    float suma=0;
    cout<<"Suma de todos los libros: "<<endl;
    for(int i=0;i<4;i++){
        suma = suma + l_array[i].getPrecio();
    }
    cout<<"Suma total de los libros ingresados: "<<suma<<endl;
}