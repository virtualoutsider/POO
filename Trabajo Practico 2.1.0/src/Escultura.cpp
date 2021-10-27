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
void Escultura::mostrar()
{
    Obra::mostrar();
    cout << "El peso de la escultura es: " << peso << endl;
    cout << "El volumen de la escultura es: " << volumen << endl;
}
void Escultura::modif()
{
    Obra::modif();
    cout << "Ingrese el peso de la escultura: "; cin >> peso;
    cout << "Ingrese el volumen de la escultura: "; cin >> volumen;
}
int Escultura::getAlt()
{
    return 1;
}


