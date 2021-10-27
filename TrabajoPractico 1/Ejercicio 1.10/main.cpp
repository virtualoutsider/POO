#include <iostream>
#include "Punto.h"
using namespace std;
#define PRESS_KEY std::cout<<"\nPresione Enter para continuar . . .\n";std::cin.get();
int main()
{
    Punto r(12.34,34.56);
    cout <<"1. punto r: "<<r<<endl;
    cout <<"2. punto r++: "<<r++<<endl;
    cout <<"3. punto r: "<<r<<endl;
    cout <<"4. punto ++r: "<<++r<<endl;
    PRESS_KEY;
    return 0;
}

