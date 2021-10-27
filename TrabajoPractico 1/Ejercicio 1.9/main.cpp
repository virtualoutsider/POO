#include <iostream>
#include "Punto.h"
using namespace std;
#define PRESS_KEY std::cout<<"\nPresione Enter para continuar . . .\n";std::cin.get();
int main()
{
    /*
        No se pueden definir const los limites,
    */
    cout <<"1. Rango de punto: "<<Punto::getLimiteInf()<< ":"<<Punto::getLimiteSup()<<endl;
    Punto p(3000.12,5000);
    Punto r(12.34,34.56);
    cout <<"2. punto p: "<<p<<endl;
    cout <<"3. punto r: "<<r<<endl;
    Punto::setLimites(50,85);
    cout <<"4. Rango de punto: "<<p.getLimiteInf()<< ":"<<p.getLimiteSup()<<endl;
    cout <<"5. punto p: "<<p<<endl;
    cout <<"6. punto r: "<<r<<endl;
    Punto t;
    cout <<"7. nuevo punto t: "<<t<<endl;
    r=p; // como la igualdad no esta redefinida, no se ve afectada por el nuevo l�mite
    cout <<"8. r=p r: "<<r<<endl;
    r.setPunto(p);
    cout <<"9. setPunto r: "<<r<<endl;
    r.setLimites(50,-85);
    cout <<"10. Rango de punto: "<<Punto::getLimiteInf()<< ":"<<Punto::getLimiteSup()<<endl;
    PRESS_KEY;
    return 0;
}

