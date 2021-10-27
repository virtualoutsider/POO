#include <iostream>
#include "IntArray.h"
#define PRESS_KEY std::cout<<"\nPresione Enter para continuar . . .\n";std::cin.get();

using namespace std;
#define SZ_VEC(x) (sizeof(x)/sizeof(x[0]))
int main()
{
    int v1[]={0,5,10,15,20,25,30,35,40};
    int v2[]={1,2,3,4,5,6};
    IntArray A(10,SZ_VEC(v1),v1);
    cout<<" size:"<<A.getSize()<<endl<<" used:"<<A.getUsed()<<endl;
    A.prtArr();
    A.addElement(0,77);
    A.addElement(56,11);
    A.addElement(4,SZ_VEC(v2),v2);
    cout<<" size:"<<A.getSize()<<endl<<" used:"<<A.getUsed()<<endl;
    A.prtArr();
    A.addElement(4,99);
    cout<<" size:"<<A.getSize()<<endl<<" used:"<<A.getUsed()<<endl;
    A.prtArr();
    PRESS_KEY;
    return 0;
}
