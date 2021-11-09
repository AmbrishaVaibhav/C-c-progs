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
        cout << "Name :" << name << endl;
        cout << "age :" << age << endl;
        cout << "roll :" << roll << endl;
    }
    ~student()
    {
        cout<<"Destructor is called for student"<<endl;
    }
};
class test : virtual public student
{
    int marks[3];

public:
    test(char *n,int r,int a,int *m):student(n,r,a)
    {
        for (int i = 0; i < 3; i++)
        {
            marks[i] = m[i];
        }
        cout<<"Constructor for test is called "<<endl;
    }
    int totalm()
    {
        return marks[0] + marks[1] + marks[2];
    }
    ~test()
    {
        cout<<"Destructor is called for test"<<endl;
    }
};
class activities : virtual public student
{
    int act[2];

public:
    activities(char *n,int r,int ag,int *a):student(n,r,ag)
    {
        act[0] = a[0];
        act[1] = a[1];
        cout<<"Constructor for activities is called "<<endl;
    }
    int totala()
    {
        return (act[0] + act[1]);
    }
    ~activities()
    {
        cout<<"Destructor called for activities "<<endl;
    }
};
class result : public test, public activities
{
    int tot;
    float percentage;
    char grade;

public:
     result(char *n,int r,int ag,int *m,int *a):student(n,r,ag),test(n,r,ag,m),activities(n,r,ag,a)
    {
        cout<<"Constructor is called for result"<<endl;
        tot = totalm() + totala();
        percentage = tot / 5.0;
        int p = percentage / 10;
        switch (p)
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
        cout << "Total :" << tot << endl;
        cout << "Percentage :" << percentage << endl;
        cout << "Grade :" << grade << endl;
    }
    ~result()
    {
        cout<<"Destructor is called for result"<<endl;
    }
};

int main()
{
    char nam[30];
    int ro;
    int ag;
    int mr[3];
    int act[2];
    cout << "The details are :\n";
    cout << "enter name :" << endl;
    gets(nam);
    cout << "enter age :" << endl;
    cin >> ag;
    cout << "enter roll :" << endl;
    cin >> ro;
    for (int i = 0; i < 3; i++)
    {
        cout << "enter marks " << i + 1 << ":" << endl;
        cin >> mr[i];
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "enter activity marks " << i + 1 << ":" << endl;
        cin >> act[i];
    }
    result r(nam, ro, ag,mr,act);
    r.display();
    return 0;
}