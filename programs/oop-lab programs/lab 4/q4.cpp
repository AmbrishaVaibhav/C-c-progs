#include <iostream>
#include<string.h>
using namespace std;
class stu
{
    char name[20];
    int roll;
    float marks;
    static float avg;
    public:
    friend float avg(stu *s, int n);
        void setdata(char *a, int b, float c)
        {
            strcpy(name, a);
            roll = b;
            marks = c;
        }
        
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Marks: " <<marks<< endl;
        }
        
};
float stu :: avg;
float avg(stu *s, int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + s[i].marks;
    }
   stu :: avg = sum/n;
   cout << "The average marks scored " << stu :: avg << endl;
}
int main()
{
    int n, roll;
    char name[20];
    float marks, sum = 0; 
    cout << "Enter the number of students: ";
    cin >> n;
    stu obj[n];
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter the details of "<<i+1<<endl;
        cout << "Enter the name: ";
        getchar();
        gets(name);
        cout << "Enter the roll: ";
        cin >> roll;
        cout << "Enter the total marks scored: ";
        cin >> marks;
        sum += marks;
        obj[i].setdata(name, roll, marks);
    }
    cout<<"\n";
    avg(obj, n);
    return 0;
}


