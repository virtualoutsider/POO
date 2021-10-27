#include "Punto.h"

Punto::Punto(double _mx,double _my)
{
    mx = _mx;
    my = _my;
}
Punto::~Punto()
{
    //dtor
}

void Punto::setPunto(double _mx,double _my){
    mx = _mx;
    my = _my;
}

Punto Punto::getPunto(){
    return *this;
}



