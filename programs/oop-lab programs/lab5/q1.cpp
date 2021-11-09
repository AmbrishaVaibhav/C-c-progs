#include <iostream>
using namespace std;
class complex 
{
    int real;
    int img;
    public :
    void display();
    complex()
    {
        real=10;
        img=15;
    }

complex(int r,int i)
{
     real=r;
     img=i;
}
complex (const complex &r1,const complex &i1)
{
    real=r1.real;
    img=i1.img;
}
~complex()
{
    cout<<"Destructors being invoked \n";
}};
void complex ::display()
{
    cout<<real<<"+ "<<img<<" i"<<endl;
}
int main()
{
    complex c1;
    c1.display();
    complex c2(3,8);
    c2.display();
    complex c3(c1);
    c3.display();
    complex c4(c2);
    c4.display();
    return 0;
}