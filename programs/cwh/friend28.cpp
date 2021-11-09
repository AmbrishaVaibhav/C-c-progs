#include <iostream>
using namespace std;
class a;
class b
{
    int x;
    public :
    void set(int p)
    {
        x=p;
    }
    friend void sum(a,b);
};
class a
{
    int y;
    public :
    void set(int s)
    {
        y=s;
    }
   friend void sum(a,b);
};

void sum(a obj , b obj2)
{
    cout<<"sum = "<<obj.y+obj2.x;
}
int main()
{
    a op;
    b cp;
    cp.set(10);
    op.set(20);
    sum(op,cp);
    return 0;
}

