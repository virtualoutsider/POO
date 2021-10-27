#include "Cuadro.h"
#include <iostream>
using namespace std;
Cuadro::Cuadro(int _codigo,string _nombre,string _nombreart,string _nacionalidad,int _base,int _altura) :Obra(_codigo,_nombre,_nombreart,_nacionalidad)
{
    base = _base;
    if (_altura >= 50 && _altura <= 200){
        altura = _altura;
    }else{
        setAlt();
    }
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
    while(altura < 50 || altura > 200){
        cout << "Ingrese un valor de altura correcto (50-200): ";
        cin >> altura;
    }

}
