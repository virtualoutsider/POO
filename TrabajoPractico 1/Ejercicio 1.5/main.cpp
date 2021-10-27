#include <iostream>
#include "Punto.h"
using namespace std;
#define PRESS_KEY std::cout<<"\nPresione Enter para continuar . . .\n";std::cin.get();
int main()
{
    /*
        1.1 No requiere un operador =, pero se puede implementar y que funcione de igual forma.
            Si se sobrecargar el operador = de esta forma void Punto::operator=(const Punto& p)
            debido a que si necesito guardar el valor tengo que modificarlos con los valores de los parametros,
            en cuanto al parametro se le pasa por referencia y const para no cambiar su valor.
        1.2 La linea q = r + 47 hace que se forme un objeto temporal con el mx = 47, de forma que se va a poder
            ejecutar la linea de forma adecuada
    */

    Punto p(12.34,-56.78);
    Punto r(1,4);
    Punto q;
    cout <<"1. punto p= ("<<p.getX()<<";"<<p.getY()<<")"<<endl;
    cout <<"2. punto r= ("<<r.getX()<<";"<<r.getY()<<")"<<endl;
    q=p+r;
    cout <<"3. punto p+r: q= ("<<q.getX()<<";"<<q.getY()<<")"<<endl;
    q=p-r;
    cout <<"4. punto p-r: q= ("<<q.getX()<<";"<<q.getY()<<")"<<endl;
    Punto s(990,-990);
    cout <<"5. punto s= ("<<s.getX()<<";"<<s.getY()<<")"<<endl;
    q=s+p;
    cout <<"6. punto s+p: q= ("<<q.getX()<<";"<<q.getY()<<")"<<endl;
    q=r+47;
    cout <<"7. punto r+47: q= ("<<q.getX()<<";"<<q.getY()<<")"<<endl;
    PRESS_KEY;
    return 0;
}

