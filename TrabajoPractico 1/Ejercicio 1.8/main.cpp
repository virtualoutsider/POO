#include <iostream>
#include "Punto.h"
using namespace std;
#define PRESS_KEY std::cout<<"\nPresione Enter para continuar . . .\n";std::cin.get();
int Punto::cantcrea = 0;
int Punto::cantex = 0;
void ff (void)
{
    Punto p,q,w;
    Punto h(34);
    Punto r=h;
    cout <<"a. Puntos Creados:"<<Punto::getCantCreada()<< " - Existentes:"<< r.getCantExistente()<<endl;
}

int main()
{
    cout <<"1. Puntos Creados:"<<Punto::getCantCreada()<< " - Existentes:"<< Punto::getCantExistente()<<endl;
    Punto p(12.34,-56.78);
    cout <<"2. Puntos Creados:"<<p.getCantCreada()<< " - Existentes:"<< p.getCantExistente()<<endl;
    Punto h(p);
    cout <<"3. Puntos Creados:"<<Punto::getCantCreada()<< " - Existentes:"<< Punto::getCantExistente()<<endl;
    ff();
    cout <<"4. Puntos Creados:"<<Punto::getCantCreada()<< " - Existentes:"<< Punto::getCantExistente()<<endl;
    PRESS_KEY;
    return 0;
}

