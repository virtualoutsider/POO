#ifndef INTARRAY_H
#define INTARRAY_H


class IntArray
{
    private:
        int * p;
        int sized;
        int used;
    public:
        IntArray(int sz);
        IntArray(int sz,int qtty,int *vec);
        ~IntArray();
        void prtArr (int amount = 0);
        int getSize(){return sized;};
        int getUsed(){return used;};
        double getAvg();
};

#endif // INTARRAY_H


