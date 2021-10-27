#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>
using namespace std;
class Punto
{
    private:
        double mx,my;
        void verif();

        static int cantcrea;
        static int cantex;

    public:
        Punto(double _mx = 0,double _my = 0);
        Punto(const Punto& p);
        virtual ~Punto();
        void setPunto(Punto p);
        Punto getPunto();
        inline void setX(double _mx){
            mx = _mx;
            verif();
        }
        inline void setY(double _my){
            my = _my;
            verif();
        }
        inline double getX(){
            return mx;
        }
        inline double getY(){
            return my;
        }

        static int getCantCreada(){return cantcrea;}
        static int getCantExistente(){return cantex;}

};

#endif // PUNTO_H
