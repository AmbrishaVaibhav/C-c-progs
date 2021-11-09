#include <iostream>
using namespace std;
#include<string.h>
class employee
{
    protected:
    char name[20];
    int id;
    int salary;
    public:
    employee(const char *a, int b)
    {
        strcpy(name, a);
        id = b;
    }
    virtual void cal(){}
    virtual void print(){}
};
class regular:public employee
{
    int da,hra,basic;
    public:
     regular(char const *a,int b,int c,int d,int e):employee(a,b)
    {
       da=c;
       hra=d;
       basic=e;
    }
    void cal()
    {
        da = 0.8*basic;
        hra = 0.5*basic;
        salary = da + hra + basic;
    }
    void print()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Salary :"<<salary<<endl;
    }

};
class parttime:public employee
{
    int hours,pay;
    public:
     parttime(char const *a,int b,int c,int d):employee(a,b)
    {
       hours=c;
       pay=d;
    }
    void cal()
    {
        salary=hours*pay;
    }
    void print()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Salary :"<<salary<<endl;
    }

};
int main()
{
    employee *ptr[2];
    regular r("Ava", 1234,20,40,800);
    parttime p("Alex",1235,10,100);
    ptr[0]=&r;
    ptr[1]=&p;
    ptr[0]->cal();
    ptr[1]->cal();
    cout<<"\nDetails of regular employee :\n"<<endl;
    ptr[0]->print();
    cout<<"\n Details of part-time employee :\n"<<endl;
    ptr[1]->print();
    return 0;
}