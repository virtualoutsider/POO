#include "Cuadro.h"
#include <iostream>
using namespace std;
Cuadro::Cuadro(int _codigo,string _nombre,string _nombreart,string _nacionalidad,int _base,int _altura) :Obra(_codigo,_nombre,_nombreart,_nacionalidad)
{
    base = _base;
    altura = _altura;
    //ctor
}

Cuadro::~Cuadro()
{
    //dtor
}
void Cuadro::calcular_tam()
{
    cout << "La tamano es: " << base*altura << "cm cuadrados" << endl;
    cout << "Siendo " << base*altura/100 << "m cuadrados" << endl;
}
Cuadro Cuadro::mayorAlt(Cuadro& C)
{
    if(altura > C.altura){
        cout << "El cuadro " << nombre << " es mas alto" << endl;
        return *this;
    }else{
        cout << "El cuadro " << C.nombre << " es mas alto" << endl;
        return C;
    }
}

void Cuadro::setAlt(){
    cout << "Ingrese altura: "; cin >> altura;
    while(altura < 50 || altura > 200){
        cout << "Ingrese un valor de altura correcto (50-200): ";
        cin >> altura;
    }

}
void Cuadro::mostrar()
{
    Obra::mostrar();
    cout << "La base del cuadro es: " << base << endl;
    cout << "La altura del cuadro es: " << altura << endl;

}
void Cuadro::modif(){
    Obra::modif();
    cout << "Ingrese el base del cuadro: "; cin >> base;
    cout << "Ingrese el altura del cuadro: "; cin >> altura;
    if (altura >= 50 && altura <= 200){
        return;
    }else{
        setAlt();
    }
}

