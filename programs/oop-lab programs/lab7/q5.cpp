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
    employee(char* n,int i)
    {
        cout << "employee constructor is called \n";
        strcpy(name,n);
        id=i;
    }
    void print()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"ID :"<<id<<endl;
        cout<<"Salary :"<<salary<<endl;
    }
    ~employee()
    {
        cout << "employee destructor is called!\n";
    }
};
class regular:public employee
{
    int da,hra,basicsalary;
    public:
    regular(char *n,int i,int b):employee(n,i)
    {
       
        cout << "regular constructor is called!\n";
        basicsalary = b;
        da = 0.8*basicsalary;
        hra = 0.5*basicsalary;
        salary = da + hra + basicsalary;
    }
     ~regular()
    {
        cout << "regular destructor is called!\n";
    }
};
class partime:public employee
{
    int hours,pay_per_hour;
    public:
    partime(char *n,int i,int h,int p):employee(n,i)
    {
        hours=h;
        pay_per_hour=p;
        salary=hours*pay_per_hour;
}
     ~partime()
    {
        cout << "part_time destructor is called!\n";
    }  
};
int main()
{
    
    int a_207,b_207,c_207,d_207;
    char name_207[30];
    cout<<"Enter the details of regular employee "<<endl;
    cout<<"enter the name :"<<endl;
    cin>>name_207;
    cout<<"Enter the id :"<<endl;
    cin>>a_207;
    cout<<"Enter the basic salary :"<<endl;
    cin>>b_207;
    regular ob(name_207,a_207,b_207);
    cout<<"enter the details for part time employee :"<<endl;
    cout<<"enter the name :"<<endl;
    cin>>name_207;
    cout<<"Enter the id :"<<endl;
    cin>>a_207;
    cout<<"enter the number of hours :"<<endl;
    cin>>c_207;
    cout<<"enter the pay per hour :"<<endl;
    cin>>d_207;
    partime ob2(name_207,a_207,c_207,d_207);
    cout<<"Regular employee data :"<<endl;
    ob.print();
    cout<<"Part time employee data :"<<endl;
    ob2.print();
    return 0;

}