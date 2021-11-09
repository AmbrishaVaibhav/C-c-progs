#include <iostream>
using namespace std;
class complex 
{
    int a;
    int b;
    public :
    complex(void);
    void print()
    {
        cout<<"the number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex :: complex(void)
{
    a=10;
    b=10;
    
}
int main()
{
    complex c1,c2,c3;
    c1.print();
    c2.print();
    c3.print();
    return 0;
}