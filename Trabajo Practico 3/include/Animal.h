#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal
{
    public:
        Animal(int _numero,string _nombre,int _edad);
        virtual ~Animal();
        virtual void mostrar()=0;
        virtual float getPeso();
        virtual int getHuevos();
        virtual float getVel();
        string getNom(){return nombre;}
        int getNum() { return numero; }
        int getEdad(){return edad;}
        string gettypeid();

    protected:
        int numero;
        string nombre;
        int edad;
    private:


};

#endif // ANIMAL_H
