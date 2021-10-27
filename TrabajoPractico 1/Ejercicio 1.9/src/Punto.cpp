#include "Punto.h"
#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int Punto::limiteinf = -1000;
int Punto::limitesup = 1000;

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
    //cout << "destructor" << endl;
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
    if(mx > limitesup){
        mx = limitesup;
    }
    if(mx < limiteinf){
        mx = limiteinf;
    }
    if(my > limitesup){
        my = limitesup;
    }
    if(my < limiteinf){
        my = limiteinf;
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
void Punto::setLimites(float limi,float lims){
    Punto::limiteinf = limi;
    Punto::limitesup = lims;
}

