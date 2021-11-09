#include <iostream>
#include <string.h>
using namespace std;
class student
{
    
   char name[20];
   int roll;
   int age;
   public:
   student(char *n,int r,int a)
   {
       strcpy(name,n);
       roll=r;
       age=a;
       cout<<"Constructor is called for student"<<endl;
   }
   void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"roll :"<<roll<<endl;
    }
    ~student()
    {
        cout<<"Destructor called for student "<<endl;
    }
};
class test : public student
{
    int marks[5];
    public :
    test(char *n,int r,int a,int *m):student(n,r,a)
    {
       for(int i=0;i<5;i++)
    {
        marks[i]=m[i];
    }cout<<"Constructor is called for test"<<endl;;
    }
    void display()
    {
        student ::display();
        cout<<"Marks in 5 subjects are :\n";
         for(int i=0;i<5;i++)
    {
        cout<<"marks "<<i+1<<":"<<marks[i]<<endl;
    }

    }
     ~test()
    {
        cout<<"Destructor called for test "<<endl;
    }

};
int main()
{
   char nam[30];
   int ro;
   int ag;
   int mr[5];
   cout<<"The details are :\n";
   cout<<"enter name :"<<endl;
   gets(nam);
   cout<<"enter age :"<<endl;
   cin>>ag;
   cout<<"enter roll :"<<endl;
   cin>>ro;
   for(int i=0;i<5;i++)
   {
    cout<<"enter marks "<<i+1<<":"<<endl;
    cin>>mr[i];
   }
   test t(nam,ag,ro,mr);
   t.display();
   return 0;
}



