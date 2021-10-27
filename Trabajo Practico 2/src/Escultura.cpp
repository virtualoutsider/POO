#include "Escultura.h"
#include <iostream>
using namespace std;
Escultura::Escultura(int _codigo,string _nombre,string _nombreart,string _nacionalidad,int _peso,int _volumen) :Obra(_codigo,_nombre,_nombreart,_nacionalidad)
{
    peso = _peso;
    volumen = _volumen;
    //ctor
}

Escultura::~Escultura()
{
    //dtor
}
void Escultura::calcular_tam()
{
    cout << "El metro cubico es " << peso / volumen << endl;
}
