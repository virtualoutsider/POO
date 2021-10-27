#ifndef OBRA_H
#define OBRA_H
#include "Artista.h"
#include <string>
using namespace std;

class Obra
{
    public:
        Obra(int _codigo=0,string _nombre="",string _nombreart="",string _nacionalidad="");
        ~Obra();
        virtual void calcular_tam()=0;
        void mostrar();
    protected:
        int codigo;
        string nombre;
        Artista art;
    private:
};

#endif // OBRA_H
