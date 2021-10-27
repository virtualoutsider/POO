#include <iostream>
#include "Punto.h"
using namespace std;
#define PRESS_KEY std::cout<<"\nPresione Enter para continuar . . .\n";std::cin.get();
int main()
{
    /*
        La implementacion del codigo friend Punto operator +(int i,Punto p) y friend Punto operator -(int i,Punto p)
        permite poder pasarle un parametro int con el fin de poder usarlo dentro de la funcion, de esta forma se puede
        restar el numero dado con los atributos del objeto
    */
    Punto p(12.34,-56.78);
    Punto r,s;
    s=78+p; // 15 + 14 = 14 + 15
    r=78-p; // 14 - 15 != 15 - 14
    cout <<"1. punto p= ("<<p.getX()<<";"<<p.getY()<<")"<<endl;
    cout <<"2. punto 78+p: s= ("<<s.getX()<<";"<<s.getY()<<")"<<endl;
    cout <<"3. punto 78-p: r= ("<<r.getX()<<";"<<r.getY()<<")"<<endl;
    r=p+s-45;
    cout <<"4. punto p+s-45: r= ("<<r.getX()<<";"<<r.getY()<<")"<<endl;
    PRESS_KEY;
    return 0;
}

