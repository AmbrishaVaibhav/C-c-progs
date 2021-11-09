#include<iostream>
using namespace std;
class call
{
    int a;
    public:
    call()
    {
        a=6;
        cout<<"Default constructor for object value : "<<a;
    }
    call(int b)
    {
        a=b;
        cout<<"\nConstructor called for object value : "<<a;
    }
    ~call()
    {
        cout<<"\nDestructor called for object value : "<<a;
    }
};
int main()
{
    call c1(1);
    call c2(10);
    call c3(5);

}