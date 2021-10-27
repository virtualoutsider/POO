#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>
using namespace std;
class Punto
{
    private:
        double mx,my;
        void verif();
    public:
        Punto(double _mx = 0,double _my = 0);

        virtual ~Punto();
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

        friend ostream &operator <<(ostream &,const Punto &);
        friend istream &operator >>(istream &,Punto&);

        Punto operator ++();
        Punto operator ++(int);

};

#endif // PUNTO_H
