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
    friend dis operator +(int p,dis ob1);
};
    dis operator +(int p,dis ob1)
    {
        dis ob;
        ob.inches=p+ob1.inches;
        ob.feet=ob1.feet+(ob.inches/12);
        ob.inches=ob.inches%12;
        return ob;
    }

int main()
{
    dis D1(10,10);
    dis D2;
    D2=5+D1;
    D2.print();
    return 0;
}