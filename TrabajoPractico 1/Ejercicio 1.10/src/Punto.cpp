#include "Punto.h"
#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

Punto::Punto(double _mx,double _my)
{
    mx = _mx;
    my = _my;
    verif();
}

Punto::~Punto()
{
    //cout << "destructor" << endl;
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

ostream &operator <<(ostream &s,const Punto &p){
    cout << "(" << p.mx << ":" << p.my << ")" << endl;
    return s;
}
istream &operator >>(istream &s,Punto& p){
    cout << "Ingrese el valor x: "; s >> p.mx;
    cout << "Ingrese el valor y: "; s >> p.my;
    return s;
}

Punto Punto::operator ++(){
    mx += 1;
    my += 1;
    return *this;
}
Punto Punto::operator ++(int){

    mx += 1;
    my += 1;
    Punto aux(mx-1,my-1);
    return aux;
}

