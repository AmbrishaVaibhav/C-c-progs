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
    complex operator ++()
    {
        ++real;
        ++img;
        return *this;
    }
    void print()
    {
    cout<<"Complex number : "<<real<<"+"<<img<<"i";
    }

};
int main()
{
         complex c(10,20);
         ++c;
         c.print();
         return 0;
}
