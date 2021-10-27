#ifndef INTARRAY_H
#define INTARRAY_H
#include <iostream>
using namespace std;

class IntArray
{
    private:
        int * p;
        int sized;
        int used;
        void aumentar();
    public:
        IntArray(int sz = 0);
        IntArray(int sz,int qtty,int *vec);
        IntArray(const IntArray &);
        ~IntArray();
        void prtArr (int amount = 0);
        int getSize(){return sized;};
        int getUsed(){return used;};
        void addElement (int pos, int xx);
        void addElement (int pos, int qtty, int *vec);
        friend ostream& operator << (ostream&,const IntArray&);
        IntArray & operator +=(const IntArray& p);
        IntArray operator +(const IntArray& p);
};

#endif // INTARRAY_H


