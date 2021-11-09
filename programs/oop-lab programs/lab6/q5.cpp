#include <iostream>
#include<string.h>
using namespace std;
class employee
{
    char name[30];
    int id;
    protected :
    float salary;
    public:
    void getdata(char* n,int i)
    {
        strcpy(name,n);
        id=i;
    }
    void print()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"ID :"<<id<<endl;
        cout<<"Salary :"<<salary<<endl;
    }
};
class regular:public employee
{
    int da,hra,basicsalary;
    public:
    void getdata(char *n,int i,int b)
    {
        employee::getdata(n,i);
        basicsalary = b;
        da = 0.8*basicsalary;
        hra = 0.5*basicsalary;
        salary = da + hra + basicsalary;
    }
};
class partime:public employee
{
    int hours,pay_per_hour;
    public:
    void getdata(char *n,int i,int h,int p)
    {
        employee::getdata(n,i);
        hours=h;
        pay_per_hour=p;
        salary=hours*pay_per_hour;
}};
int main()
{
    regular r_207;
    partime p_207;
    int a_207,b_207,c_207,d_207;
    char name_207[30];
    cout<<"Enter the details of regular employee "<<endl;
    cout<<"enter the name :"<<endl;
    cin>>name_207;
    cout<<"Enter the id :"<<endl;
    cin>>a_207;
    cout<<"Enter the basic salary :"<<endl;
    cin>>b_207;
    r_207.getdata(name_207,a_207,b_207);
    cout<<"enter the details for part time employee :"<<endl;
    cout<<"enter the name :"<<endl;
    cin>>name_207;
    cout<<"Enter the id :"<<endl;
    cin>>a_207;
    cout<<"enter the number of hours :"<<endl;
    cin>>c_207;
    cout<<"enter the pay per hour :"<<endl;
    cin>>d_207;
    p_207.getdata(name_207,a_207,c_207,d_207);
    cout<<"Regular employee data :"<<endl;
    r_207.print();
    cout<<"Part time employee data :"<<endl;
    p_207.print();
    return 0;

}