#include <iostream>
#include <string.h>
using namespace std;
class student
{
    char name[20];
    int roll;
    int age;

public:
    void getdata1(char *n, int r, int a)
    {
        strcpy(name, n);
        roll = r;
        age = a;
    }
    void display()
    {
        cout << "Name :" << name << endl;
        cout << "age :" << age << endl;
        cout << "roll :" << roll << endl;
    }
};
class test : virtual public student
{
    int marks[3];

public:
    void getdata2(int *m)
    {
        for (int i = 0; i < 3; i++)
        {
            marks[i] = m[i];
        }
    }
    int totalm()
    {
        return marks[0] + marks[1] + marks[2];
    }
};
class activities : virtual public student
{
    int act[2];

public:
    void getdata3(int *a)
    {
        act[0] = a[0];
        act[1] = a[1];
    }
    int totala()
    {
        return (act[0] + act[1]);
    }
};
class result : public test, public activities
{
    int tot;
    float percentage;
    char grade;

public:
    void total1()
    {
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
};

int main()
{
    result s1_207;
    char nam_207[30];
    int ro_207;
    int ag_207;
    int mr_207[3];
    int act_207[2];
    cout << "The details are :\n";
    cout << "enter name :" << endl;
    gets(nam_207);
    cout << "enter age :" << endl;
    cin >> ag_207;
    cout << "enter roll :" << endl;
    cin >> ro_207;
    for (int i = 0; i < 3; i++)
    {
        cout << "enter marks " << i + 1 << ":" << endl;
        cin >> mr_207[i];
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "enter activity marks " << i + 1 << ":" << endl;
        cin >> act_207[i];
    }
    s1_207.getdata1(nam_207, ro_207, ag_207);
    s1_207.getdata2(mr_207);
    s1_207.getdata3(act_207);
    s1_207.total1();
    s1_207.display();
    return 0;
}