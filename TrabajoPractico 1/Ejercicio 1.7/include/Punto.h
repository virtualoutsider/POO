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
        Punto operator +(const Punto& p);
        Punto operator -(const Punto& p);

        bool operator ==(const Punto& p);
        bool operator !=(const Punto& p);
        bool operator >(const Punto& p);
        bool operator <(const Punto& p);

        friend Punto operator +(int i,Punto p);
        friend Punto operator -(int i,Punto p);

        friend ostream& operator <<(ostream&,const Punto&);
        friend istream& operator >>(istream&,Punto&);
        //void operator=(const Punto& p);

};

#endif // PUNTO_H
