#include <iostream>
#include "Punto.h"
using namespace std;
#define PRESS_KEY std::cout<<"\nPresione Enter para continuar . . .\n";std::cin.get();
int main()
{
    Punto *r=new Punto(12.34,34.56);
    cout <<"1. punto r: "<<*r<<endl;
    cout <<"2. Puntos Creados:"<<r->getCantCreada()<< " - Existentes:"<< Punto::getCantExistente()<<endl;
    delete (r);
    cout <<"3. Puntos Creados:"<<Punto::getCantCreada()<< " - Existentes:"<< Punto::getCantExistente()<<endl;
    PRESS_KEY;
    return 0;
}

