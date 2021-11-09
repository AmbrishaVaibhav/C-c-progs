#include <iostream>
using namespace std;
class complex 
{
    int real,img;
    public:
    complex()
    {
         real=0;
         img=0;
    }
    complex(int a,int b)
    {
          real=a;
          img=b;
    }
    
    void print()
    {
    cout<<"Complex number : "<<real<<"+"<<img<<"i";
    }
    friend complex operator ++(complex &a);

};
complex operator ++(complex &a)
    {
        
        ++a.real;
        ++a.img;
        return a;
    }
int main()
{
         complex a(10,20);
         complex ab;
         ++a;
         a.print();
         ab=++a;
         ab.print();
         return 0;
}