#include <iostream>
using namespace std;
class dis
{
    int feet,inches;
    public:
    dis()
    {
        feet=0;
        inches=0;
    }
    dis(int a,int b)
    {
        feet=a;
        inches=b;
    }
    void print()
    {
        cout<<"distance is : "<<feet<<" feet and "<<inches<<" Inches"<<endl;
    }
    dis operator +(dis ob2)
    {
        dis ob;
        ob.inches=inches+ob2.inches;
        ob.feet=feet+ob2.feet+(ob.inches/12);
        ob.inches=ob.inches%12;
        return ob;
    }
};
int main()
{
    dis D1(10,10);
    dis D2(13,3);
    dis D3;
    D3=D1+D2;
    D3.print();
    return 0;

}
