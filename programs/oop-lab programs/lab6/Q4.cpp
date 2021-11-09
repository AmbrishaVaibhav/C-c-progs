#include <iostream>
#include<math.h>
using namespace std;
class shape
{
    protected:
    float area;
    public:
    void print()
    {
        cout<<"Area :"<<area;
    }
};
class circle:public shape
{
    int radius;
    public:
    void getdata(int r)
    {
       radius=r;
    }
    void calc()
    {
        area=3.14*radius*radius;
    }
};
class triangle:public shape
{
    int a,b,c;
    public:
    void getdata(int x,int y,int z)
    {
       a=x;
       b=y;
       c=z;
    }
    void calc()
    {
        float s = (a + b + c) / 2.0;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
    }
};
class rectangle:public shape
{
    int len;
    int bth;
    public:
    void getdata(int l,int b)
    {
        len=l;
        bth=b;
    }
    void calc()
    {
        area=len*bth;
    }
};
int main()
{
    int rd_207,a_207,b_207,c_207,ln_207,bt_207;
    circle r1_207;
    triangle t1_207;
    rectangle s1_207;
    cout<<"Enter the radius :"<<endl;
    cin>>rd_207;
    cout<<"Enter the length and breadth of rectangle :"<<endl;
    cin>>ln_207;
    cin>>bt_207;
    cout<<"Enter the three sides of rectangle :"<<endl;
    cin>>a_207>>b_207>>c_207;
    r1_207.getdata(rd_207);
    r1_207.calc();
    t1_207.getdata(a_207,b_207,c_207);
    t1_207.calc();
    s1_207.getdata(ln_207,bt_207);
    s1_207.calc();
    r1_207.print();
    t1_207.print();
    s1_207.print();
    return 0;


}