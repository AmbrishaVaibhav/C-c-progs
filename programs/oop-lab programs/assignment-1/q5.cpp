#include<iostream>
#include<string.h>
using namespace std;
class stu
{   char name_207[20];
    int roll_207;
    float marks_207[5],total,avg_207;
    static float ac;
    public:
        void diplay()
        {
            cout << "name : " << name_207 << endl;
            cout << "roll : " << roll_207 << endl;
            cout << "The marks of 5 subjects : ";
            for(int i = 0; i < 5; i++)
            {
                cout << marks_207[i] << " ";
            }
            cout << "\nThe avg marks of this student is " << avg_207 << endl;
        }
        void input(char *p, int r, float array_207[])
        {
            float sum = 0;
            strcpy(name_207, p);
            roll_207 = r;
            for(int i = 0; i < 5; i++)
            {
                marks_207[i] = array_207[i];
                sum += array_207[i];
            }
            total = sum;
            avg_207 = sum/5;
        }
        friend void as1(stu *s, int n);
        friend void above(stu *s, int n);
        friend void below(stu *s, int n);
        friend void sort(stu *s, int n);
        friend void highest(stu *s, int n);
};
float stu :: ac;
void as1(stu *s, int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += (s + i)->total;
    }
    stu :: ac = sum/n;
    cout << "The avg marks scored by class is " << stu :: ac << endl;
}
void above(stu *s, int n)
{
    cout << "The student who got more than avg marks :\n";
    for(int i = 0; i < n; i++)
    {
        if(s[i].total > stu :: ac)
        {
            s[i].diplay();
        }
    }
}
void below(stu *s, int n)
{
    cout << "The student who got less than avg marks :\n";
    for(int i = 0; i < n; i++)
    {
        if(s[i].total < stu :: ac)
        {
            s[i].diplay();
        }
    }
}
void sort(stu *s, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(s[j].total > s[j + 1].total)
            {
                stu temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
void highest(stu *s, int n)
{
    cout << "The student who got highest marks is:\n";
    stu temp = s[0];
    for(int i = 1; i < n; i++)
    {
        if(temp.total < s[i].total)
            temp = s[i];
    }
    temp.diplay();
}
int main()
{
    int n, roll_207;
    char name_207[20];
    float marks_207[5];
    cout << "Enter the number of students: ";
    cin >> n;
    stu s1[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the name : ";
        getchar();
        gets(name_207);
        cout << "Enter the roll : ";
        cin >> roll_207;
        cout << "Enter the marks of 5 subjects:\n";
        for(int j = 0; j < 5; j++)
        {
            cout << "marks[" << j + 1 << "]: ";
            cin >> marks_207[j];
        }
        s1[i].input(name_207, roll_207, marks_207);
    }
    above(s1, n);
    cout << "--------------\n";
    below(s1, n);
    cout << "--------------\n";
    sort(s1, n);
    for(int i = 0; i < n; i++)
    {
        s1[i].diplay();
    }
    cout << "--------------\n";
    highest(s1, n);
    return 0;
}
