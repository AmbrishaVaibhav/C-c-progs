#include <iostream>
#include <string.h>

using namespace std;

class student
{
protected:
    int rollno, age;
    char name[20], course[10];

public:
    student();
    ~student();
};

student::student()
{
}

student::~student()
{
}

class test : public student
{
private:
    int marks[5];

public:
    test()
    {
    }
    test(int, int, char *, char *, int *);
    void display()
    {
        cout << "\nName - " << name;
        cout << "\nCourse - " << course;
        cout << "\nRoll no - " << rollno;
        cout << "\nAge - " << age;
        for (int i = 0; i < 5; i++)
        {
            cout << "\nThe marks of subject " << i + 1 << " - " << marks[i];
        }
    }
    ~test();
};

test::test(int roll, int ag, char *p, char *q, int *mrks)
{
    rollno = roll;
    age = ag;
    strcpy(name, p);
    strcpy(course, q);
    for (int i = 0; i < 5; i++)
        marks[i] = mrks[i];
}

test::~test()
{
}

int main()
{
    int roll, ag, mrks[5];
    char p[20], q[10];
    test t1;
    cout << "\nEnter name - ";
    gets(p);
    cout << "\nEnter course - ";
    gets(q);
    cout << "\nEnter Roll no - ";
    cin >> roll;
    cout << "\nEnter age - ";
    cin >> ag;
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter the marks of subject " << i + 1 << " - ";
        cin >> mrks[i];
    }
    t1 = test(roll, ag, p, q, mrks);
    t1.display();
    return 0;
}