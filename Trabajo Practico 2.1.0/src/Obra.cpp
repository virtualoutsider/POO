#include "Obra.h"
#include "Artista.h"
#include <iostream>
using namespace std;
Obra::Obra(int _codigo,string _nombre,string _nombreart,string _nacionalidad)
{
    Artista art2(_nombreart,_nacionalidad);
    art = art2;
    codigo = _codigo;
    nombre = _nombre;
    //ctor
}

Obra::~Obra()
{
    //dtor
}

void Obra::mostrar()
{
    cout << "Codigo: " << codigo << endl;
    cout << "Nombre: " << nombre << endl;
    art.mostrar();

}
string Obra::getNac(){
    return art.getnac();
}
void Obra::modif(){
    cout << "Ingrese el codigo : "; cin >> codigo;
    cout << "Ingrese el nombre de la obra: "; cin >> nombre;
    art.modif();
}


