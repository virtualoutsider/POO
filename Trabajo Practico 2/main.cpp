#include <iostream>
#include "Obra.h"
#include "Cuadro.h"
using namespace std;

int main()
{
    Cuadro C1(15,"MonaLisa","DaVinci","Italiano",50,110);
    Cuadro C2(45,"Shout","Leonardo","Frances",20,150);
    C1.mayorAlt(C2);
    C1.calcular_tam();
    C2.calcular_tam();
    //int _codigo=0,string _nombre="",string _nombreart="",string _nacionalidad="",int _base=0,int _altura=0
    return 0;
}
