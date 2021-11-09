#include <iostream>
using namespace std;
class me;
class fe
{
    int feet_07,inches_07;
    public :
    friend me add(fe ,me);
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
    friend me add(fe ,me);
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

me add(fe a1,me b2)
{
    me temp;
    float m1 = (a1.inches_07*2.54)+(a1.feet_07*30.48);
    float m2 = (b2.meter_07*100)+(b2.centi_07);
    m2=m2+m1;
    int meter = m2/100;
    int centi = (m2-(meter*100)); 
    temp.meter_07 = meter;
    temp.centi_07 = centi;
    return temp;
}
  int main()
{
    fe a1;
    me b2,total_07;
    a1.setdata(10,15);
    b2.setdata(6,9);
    total_07 = add(a1,b2);
    total_07.display();
    return 0;
}
