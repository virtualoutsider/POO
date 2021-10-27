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
bool Punto::operator ==(const Punto& p){
    return (((mx == p.mx) && (my == p.my)));
}
bool Punto::operator !=(const Punto& p){
    return (((mx != p.mx) || (my != p.my)));
}
bool Punto::operator >(const Punto& p){
    double h1 = (pow(abs(mx),2) + pow(abs(my),2));
    double h2 = (pow(abs(p.mx),2) + pow(abs(p.my),2));
    if(h1 > h2){
        return true;
    }
    return false;
}
bool Punto::operator <(const Punto& p){
    double h1 = sqrt((pow(abs(mx),2) + pow(abs(my),2)));
    double h2 = sqrt((pow(abs(p.mx),2) + pow(abs(p.my),2)));
    if(h2 > h1){
        return true;
    }
    return false;
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

