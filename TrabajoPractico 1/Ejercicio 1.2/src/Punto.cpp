#include "Punto.h"

Punto::Punto(double _mx,double _my)
{
    mx = _mx;
    my = _my;
    verif();
}
Punto::~Punto()
{
    //dtor
}

void Punto::setPunto(double _mx,double _my){
    mx = _mx;
    my = _my;
    verif();
}

Punto Punto::getPunto(){
    return *this;
}
void Punto::verif(){
    if(mx > 1000){
        mx = 1000;
    }
    if(mx < -1000){
        mx = -1000;
    }
    if(my > 1000){
        my = 1000;
    }
    if(my < -1000){
        my = -1000;
    }
}



