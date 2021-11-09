#include <iostream>
using namespace std;
class code
{
    int id;
    public:
    code(){};
    code(int a)
    {
        id=a;
    }
    code(const code &x)
    {
        cout<<"10";
    }
    void display()
    {
        cout<<id;
    }
};
int main()
{
    code a(100);
    code b=a;
    code d;
    d=a;
    a.display();
    d.display();
    return 0;
}