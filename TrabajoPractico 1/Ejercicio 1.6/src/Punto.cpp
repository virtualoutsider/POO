#include "Punto.h"

Punto::Punto(double _mx,double _my)
{
    mx = _mx;
    my = _my;
    verif();
}
Punto::Punto(const Punto& p)
{
    mx = p.mx;
    my = p.my;
}

Punto::~Punto()
{
    //dtor
}

void Punto::setPunto(Punto p){
    mx = p.mx;
    my = p.my;
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

Punto Punto::operator -(const Punto& p){
    Punto aux;
    aux.mx = mx - p.mx;
    aux.my = my - p.my;
    aux.verif();
    return aux;
}
Punto Punto::operator +(const Punto& p){
    Punto aux;
    aux.mx = mx + p.mx;
    aux.my = my + p.my;
    aux.verif();
    return aux;
}
/*void Punto::operator = (const Punto& p){
    mx = p.mx;
    my = p.my;
    verif();
}
*/

Punto operator +(int i,Punto p){
    Punto aux;
    aux.mx = i + p.mx;
    aux.my = 0 + p.my;
    aux.verif();
    return aux;
}

Punto operator -(int i,Punto p){
    Punto aux;
    aux.mx = i - p.mx ;
    aux.my = 0 - p.my;
    aux.verif();
    return aux;
}


