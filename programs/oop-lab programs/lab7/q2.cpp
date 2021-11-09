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
        cout<<"Distructor called for student "<<endl;
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
    }cout<<"Constructor is called for test"<<endl;
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
        cout<<"Distructor called for test "<<endl;
    }

};
class result : public test
{
    int total;
    float percentage;
    char grade;
    public:
    result(char *n,int r,int a,int *m):test(n,r,a,m)
    {
       cout<<"Constructor is called for result"<<endl;
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
    }
    ~result()
    {
        cout<<"Distructor called for result "<<endl;
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
   result r(nam,ro,ag,mr);
   r.display();
   return 0;
}