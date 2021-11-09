#include <iostream>
using namespace std;
class shape
{
    protected:
    float area;
    public:
    shape()
    {
        area=0;
    }
    
    virtual void calc()=0;
    virtual void print()=0;
};
class circle: public shape
{
    float r;
    public:
    circle()
    {
        r=0;
    }
    circle(int x)
    {
       r=x;
    }
    void calc()
    {
        area=r*r*3.14;
    }
    void print()
    {
        cout<<"area of circle is :"<<area<<endl;
    }
    
};
class square: public shape
{
    float a;
    public:
    square()
    {
        a=0;
    }
    square(int x)
    {
       a=x;
    }
    void calc()
    {
        area=a*a;
    }
    void print()
    {
        cout<<"area of square is :"<<area<<endl;
    }
    
};
class triangle: public shape
{
    float hight;
    float base;
    public:
    
    triangle(int x,int y)
    {
       hight=x;
       base=y;
    }
    void calc()
    {
        area=0.5*hight*base;
    }
    void print()
    {
        cout<<"area of triangle is :"<<area<<endl;
    }
    
};
int main()
{
    shape *ptr[3];
    circle c(5);
    square s(8); 
    triangle t(4,8);
    ptr[0]=&c;
    ptr[1]=&s;
    ptr[2]=&t;
    ptr[0]->calc();
    ptr[1]->calc();
    ptr[2]->calc();
    ptr[0]->print();
    ptr[1]->print();
    ptr[2]->print();
    return 0;
}