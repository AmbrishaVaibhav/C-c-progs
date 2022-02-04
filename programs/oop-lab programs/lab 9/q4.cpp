#include <iostream>
using namespace std;
class number
{
    protected:
    int val;
    public:
    number(int i=0)
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
        cout<<"Number :"<<hex<<val<<endl;
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
        cout<<"Number :"<<oct<<val<<endl;
    }
};
class decimal:public number
{
    public:
    decimal(int i):number(i)
    {
    }
    
    void show()
    {
        cout<<"Number :"<<val<<endl;
    }
};
int main()
{
    number *ptr[3];
    hexa h(10);
    octa o(10);
    decimal d(10);
    ptr[0]=&d;
    ptr[1]=&o;
    ptr[2]=&h;

    ptr[0]->show();
    ptr[1]->show();
    ptr[2]->show();
    return 0;

}