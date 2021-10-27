#include "Gallina.h"
#include <iostream>
using namespace std;
Gallina::Gallina(int _numero,string _nombre,int _edad,int _huevos) :Animal(_numero,_nombre,_edad)
{
    huevos = _huevos;
}

Gallina::~Gallina()
{
    //dtor
}
void Gallina::mostrar(){
    Animal::mostrar();
    cout << "Esta gallina puso en total " << huevos << " huevos" << endl << endl;
}
