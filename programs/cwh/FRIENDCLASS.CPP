#include <iostream>
using namespace std;
class complex;
class cal
{
    public :
    int add(int a,int b)
    {
        return(a+b);
    }
    int real(complex,complex);
    int img(complex,complex);

};
class complex{
    int a;
    int b;
    friend cal;
    public :
    void setdata(int c,int d)
    {
        a=c;
        b=d;
    }
    void print()
    {
        cout<<"the num is : "<<a<<" + "<<b<<"i"<<endl;
    }

};
int cal :: real(complex a1,complex a2)
{
    return(a1.a+a2.a);
}

int cal :: img(complex a1,complex a2)
{
    return(a1.b+a2.b);
}
int main()
{
    complex a1,a2;
    a1.setdata(5,6);
    a1.print();
    a2.setdata(1,5);
    a2.print();
    cal reall;
    cal imgg;
    int r=reall.real(a1,a2);
    int i=imgg.img(a1,a2);
    cout<<"the real part is : "<<r<<endl;
    cout<<"the img part is : "<<i<<endl;
    return 0;
    
}