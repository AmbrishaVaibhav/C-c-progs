#include <iostream>
using namespace std;
class number
{
    protected:
    int val;
    public:
    number(int i)
    {
        val=i;
    }
    virtual void show()=0;

};
class hexa:public number
{
    public:
    hexa(int i):number(i)
    {
    }
    void show()
    {
        cout<<hex<<val<<endl;
    }
};
class deci:public number
{
    public:
    deci(int i):number(i)
    {
    }
    
    void show()
    {
        cout<<val<<endl;
    }
};
class octa:public number
{
    public:
    octa(int i):number(i)
    {
    }
    
    void show()
    {
        cout<<oct<<val<<endl;
    }
};
int main()
{
    number *ptr[3];
    hexa h(3);
    deci d(4);
    octa o(5);
    ptr[0]=&h;
    ptr[1]=&d;
    ptr[2]=&o;

    ptr[0]->show();
    ptr[1]->show();
    ptr[2]->show();
    return 0;

}