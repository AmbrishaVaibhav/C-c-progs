#include <string.h>
#include <iostream>
using namespace std;
class seven
{
    string name[7];
    int age[7];
    public:
    void getdata();
    void display();
};
class skill:public seven
{
    string dep[7];
    public:
    void getdata();
    void display();
};
void seven::getdata()
{
   cout<<"Name :";
   getline(cin,name);
   cout<<"Age :";
   cin>>age;
}
void seven::display()
{
    cout<<"Name :"<<name<<endl;
    cout<<"Age :"<<age<<endl;
}
void skill::getdata()
{
   cout<<"Department :";
   getchar();
   getline(cin,dep);
}
void skill::display()
{
    cout<<"Skill :"<<dep<<endl;
}
int main()
{
    skill obj;
    for(int i=0;i<7;i++)
    {
        cout<<"\nEnter details of member "<<i+1<<":"<<endl;
        obj.seven::getdata();
        obj.getdata();
    }
    for(int i=0;i<7;i++)
    {
        cout<<"\nDetails of member "<<i+1<<endl;
        obj.seven::display();
        obj.display();
    }
}
