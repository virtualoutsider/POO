#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    private:
        double mx,my;
    public:
        Punto(double _mx = 0,double _my = 0);
        virtual ~Punto();
        void setPunto(double _mx = 0,double _my = 0);
        Punto getPunto();
        inline void setX(double _mx){
            mx = _mx;
        }
        inline void setY(double _my){
            my = _my;
        }
        inline double getX(){
            return mx;
        }
        inline double getY(){
            return my;
        }

};

#endif // PUNTO_H
