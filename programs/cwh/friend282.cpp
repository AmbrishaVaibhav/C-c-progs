#include <iostream>
using namespace std;
class b;
class a
{
    int x;
    friend void swappy(a &p,b &d);
    public :
    void set(int s1)
    {
        x=s1;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
class b
{
    int y;
    friend void swappy(a &p,b &d);
    public :
    void set(int s2)
    {
        y=s2;
    }
    void display()
    {
        cout<<y<<endl;
    }
};
void swappy(a &p,b &d)
{
   int temp;
   temp=p.x;
   p.x=d.y;
   d.y=temp;
}
int main()
{
    a z;
    b o;
    z.set(10);
    o.set(20);
    swappy(z,o);
    cout<<"post exchange : ";
    z.display();
    cout<<"post exchange : ";
    o.display();
    return 0;
}
