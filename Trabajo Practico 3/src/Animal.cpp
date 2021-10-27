#include "Animal.h"
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
Animal::Animal(int _numero,string _nombre,int _edad)
{
    numero = _numero;
    nombre = _nombre;
    edad = _edad;
}

Animal::~Animal()
{
    //dtor
}
void Animal::mostrar(){
    string name = gettypeid();
    cout << "El animal se llama " << nombre  << " ( "<< name<< " )"<< endl;
    cout << "El numero es: " << numero << endl;
    cout << "Tiene " << edad << " anios" << endl;
}
string Animal::gettypeid()
{
    string name = typeid(*this).name();
    name.erase(0,1);
    return name;
}
float Animal::getPeso()
{
    return 0;
}
int Animal::getHuevos()
{
    return 0;
}
float Animal::getVel()
{
    return 0;
}

