#include <iostream>
#include <string.h>
using namespace std;
class student
{
   char name[20];
   char course[30];
   int roll;
   int age;
   public:
   void getdata(char *n,int r,int a,char *c)
   {
       strcpy(name,n);
       roll=r;
       age=a;
       strcpy(course,c);
   }
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"roll :"<<roll<<endl;
        cout<<"course :"<<course<<endl;
    }
};
class test : public student
{
    int marks[5];
    public :
    void getdata(char *n,int r,int a,char *c,int *m)
    {
       student ::getdata(n,r,a,c);
       for(int i=0;i<5;i++)
    {
        marks[i]=m[i];
    }}
    void display()
    {
        student ::display();
        cout<<"Marks in 5 subjects are :\n";
         for(int i=0;i<5;i++)
    {
        cout<<"marks "<<i+1<<":"<<marks[i]<<endl;
    }

    }
};
int main()
{
   test s1_207;
   char nam_207[30];
   char cor_207[30];
   int ro_207;
   int ag_207;
   int mr_207[5];
   cout<<"The details are :\n";
   cout<<"enter name :"<<endl;
   gets(nam_207);
   cout<<"enter age :"<<endl;
   cin>>ag_207;
   cout<<"enter roll :"<<endl;
   cin>>ro_207;
   cout<<"enter course :"<<endl;
   gets(cor_207);
   cin>>cor_207;
   for(int i=0;i<5;i++)
   {
    cout<<"enter marks "<<i+1<<":"<<endl;
    cin>>mr_207[i];
   }
   s1_207.getdata(nam_207,ro_207,ag_207,cor_207,mr_207);
   s1_207.display();
   return 0;
}


