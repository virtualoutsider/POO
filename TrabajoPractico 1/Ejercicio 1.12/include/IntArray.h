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
        void prtArr () const;
};

#endif // INTARRAY_H


