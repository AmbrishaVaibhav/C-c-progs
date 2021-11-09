#include <iostream>
using namespace std;
class me;
class fe
{
    int feet_07,inches_07;
    public :
    friend void convo(fe&,me&);
    void setdata( int ft,int it)
    {
        feet_07=ft;
        inches_07=it;
    }
    void display()
    {
        cout<<feet_07<<"feet and"<<inches_07<<"inches"<<endl;  
    }
};
class me
{
    int meter_07,centi_07;
    public :
    friend void convo(fe&,me&);
    void setdata( int mt,int ct)
    {
        meter_07=mt;
        centi_07=ct;
    }
    void display()
    {
        cout<<meter_07<<" meter and "<<centi_07<<" centimeter"<<endl;  
    }
};

void convo(fe& a1,me& b2)
{
    float m1 = (a1.inches_07*2.54)+(a1.feet_07*30.48);
    float m2 = (b2.meter_07*100)+(b2.centi_07);
    if(m1>m2)
    {
        a1.display();
    }
        else
        {
        b2.display();
    }

}

int main()
{
    fe a11;
    me b22;
    a11.setdata(10, 13);
    b22.setdata(35, 11);
    convo(a11,b22);
    return 0;

}