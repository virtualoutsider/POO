#ifndef ARTISTA_H
#define ARTISTA_H
#include <string>
using namespace std;

class Artista
{
    public:
        Artista(string _nombre="",string _nacionalidad="");
        ~Artista();
        void mostrar();
        string getnom(){return nombre;};
        string getnac(){return nacionalidad;};
    protected:
        string nombre,nacionalidad;
    private:
};

#endif // ARTISTA_H
