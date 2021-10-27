#include "Artista.h"
#include <iostream>
using namespace std;
Artista::Artista(string _nombre,string _nacionalidad)
{
    nombre = _nombre;
    nacionalidad = _nacionalidad;
    //ctor
}

Artista::~Artista()
{
    //dtor
}
void Artista::mostrar()
{
    cout << "Artista: " << nombre << endl;
    cout << "Nacionalidad: " << nacionalidad << endl;
}
void Artista::modif()
{
    cout << "Ingrese el nombre del artista: "; cin >> nombre;
    cout << "Ingrese la nacionalidad del artista: "; cin >> nacionalidad;
}

