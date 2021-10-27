#include "Punto.h"
#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

Punto::Punto(double _mx,double _my)
{
    mx = _mx;
    my = _my;

    cantcrea++;
    cantex++;

    verif();
}
Punto::Punto(const Punto& p)
{
    mx = p.mx;
    my = p.my;
    cantcrea++;
    cantex++;
}

Punto::~Punto()
{
    cantex--;
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

