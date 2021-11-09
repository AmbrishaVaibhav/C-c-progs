#include <iostream>
using namespace std;
class point
{
    int x,y,z;
    public:
    point()
    {
        x=0;
        y=0;
        z=0;
    }
    point(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void print()
    {
        cout<<"The coordinates are :"<<x<<" x + "<<y<<" y + "<<z<<" z"<<endl;
    }
    point operator-()
    {
        point ob;
        ob.x=-x;
        ob.y=-y;
        ob.z=-z;
        return ob;
    }
};
int main()
{
    point a(1,2,3);
    a.print();
    point ob;
    ob=-a;
    ob.print();
    return 0;
}