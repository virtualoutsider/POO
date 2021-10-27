#include <iostream>
#include "Punto.h"
using namespace std;
#define PRESS_KEY std::cout<<"\nPresione Enter para continuar . . .\n";std::cin.get();
int main()
{
    /*
        Las modificaciones necesarias fueron ademas del codigo fuente, el agregar un constructor que permita como parametro
        un objeto Punto, en la cual se la pasa por referencia y const, en la funcion solo se igualan los valores
        del objeto parametro con la del objeto receptor
    */


    Punto p(12.34,-56.78);
    Punto r(p);
    Punto q=p;
    cout <<"1. punto p: ("<<p.getX()<<";"<<p.getY()<<")"<<endl;
    cout <<"2. punto r: ("<<r.getX()<<";"<<r.getY()<<")"<<endl;
    cout <<"3. punto q: ("<<q.getX()<<";"<<q.getY()<<")"<<endl;
    PRESS_KEY;

    return 0;
}

