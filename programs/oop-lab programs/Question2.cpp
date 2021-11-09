#include <iostream>
using namespace std;
class student
{
    string name_07;
    int roll_07;
    int marks_07;
    public:
    void getdata()
    {
        cout<<"Enter the name : ";
        cin>>name_07;
        cout<<"Enter the roll : ";
        cin>>roll_07;
        cout<<"Enter marks : ";
        cin>>marks_07;
    }
        void display()
        {
        cout<<"Name : "<<name_07<<endl;
        cout<<"Roll : "<<roll_07<<endl;
        cout<<"marks :"<<marks_07<<endl;
}};
        int main()
        {
            student s_07;
            s_07.getdata();
            cout << endl;
            cout<<"The details are : " <<endl;
            s_07.display();
            return 0;
        }