#include "Caballo.h"
#include <iostream>
using namespace std;
Caballo::Caballo(int _numero,string _nombre,int _edad,float _velocidad) :Animal(_numero,_nombre,_edad)
{
    velocidad = _velocidad;
    //ctor
}

Caballo::~Caballo()
{
    //dtor
}

void Caballo::mostrar(){
    Animal::mostrar();
    cout << "La velocidad del caballo es: " << velocidad << "km/h "<< endl << endl;
}
