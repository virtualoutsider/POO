#include "Vaca.h"
#include <iostream>
using namespace std;
Vaca::Vaca(int _numero,string _nombre,int _edad,float _peso) :Animal(_numero,_nombre,_edad)
{
    peso = _peso;
}

Vaca::~Vaca()
{
    //dtor
}
void Vaca::mostrar(){
    Animal::mostrar();
    cout << "Esta vaca pesa " << peso << " kg" << endl << endl;
}
