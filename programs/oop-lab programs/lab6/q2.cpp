#include <iostream>
#include <string.h>
using namespace std;
class student
{
   char name[20];
   int roll;
   int age;
   public:
   void getdata(char *n,int r,int a)
   {
       strcpy(name,n);
       roll=r;
       age=a;
    }
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"roll :"<<roll<<endl;
    }
};
class test : public student
{
    int marks[5];
    public :
    void getdata(char *n,int r,int a,int *m)
    {
       student ::getdata(n,r,a);
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
class result : public test
{
    int total;
    float percentage;
    char grade;
    public:
    void getdata(char *n,int r,int a,int *m)
    {
        test::getdata(n,r,a,m);
        total=0;
       for(int i=0;i<5;i++)
    {
        total=total+m[i];
    } 
    percentage=total/5.0; 
    int p=percentage/10;
    switch(p)
    {
        case 10:

        case 9:
            grade = 'O';
            break;
        case 8:
            grade = 'E';
            break;
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    }
    void display()
    {
        test ::display();
        cout<<"Total :"<<total<<endl;
        cout<<"Percentage :"<<percentage<<endl;
        cout<<"Grade :"<<grade<<endl;
    }};
      
int main()
{
   result s1_207;
   char nam_207[30];
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
   for(int i=0;i<5;i++)
   {
    cout<<"enter marks "<<i+1<<":"<<endl;
    cin>>mr_207[i];
   }
   s1_207.getdata(nam_207,ro_207,ag_207,mr_207);
   s1_207.display();
   return 0;
}