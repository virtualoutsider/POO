#include "Punto.h"
#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int Punto::cantcrea = 0;
int Punto::cantex = 0;
Punto::Punto(double _mx,double _my)
{
    mx = _mx;
    my = _my;
    cantcrea++;
    cantex++;
    verif();
}

Punto::~Punto()
{
    cantex--;
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

ostream &operator <<(ostream &s,const Punto &p){
    cout << "(" << p.mx << ":" << p.my << ")" << endl;
    return s;
}
istream &operator >>(istream &s,Punto& p){
    cout << "Ingrese el valor x: "; s >> p.mx;
    cout << "Ingrese el valor y: "; s >> p.my;
    return s;
}
void * Punto::operator new(size_t size){
    //void * p = ::new Punto();
    void * p = malloc(size);
    return p;
}
void Punto::operator delete(void * p){
    free(p);
}

