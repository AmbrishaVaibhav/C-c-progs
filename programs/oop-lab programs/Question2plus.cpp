#include <iostream>
using namespace std;
class student
{
    string name_07;
    int roll_07;
    int marks_07[5];
    int total_07 =0;
    int percentage_07;
    public:
    void getdata()
    {
        cout<<"Enter the name : ";
        cin>>name_07;
        cout<<"Enter the roll : ";
        cin>>roll_07;
        cout<<"Enter marks of five subjects: " << endl;
        for(int i=0;i<5;i++)
        {
        cout<<"Enter marks" << i+1 << ": " ;
        cin>>marks_07[i];
        total_07 = total_07 + marks_07[i];
        }   
    }
        void display()
        {
        cout<<"Name : "<<name_07<<endl;
        cout<<"roll : "<<roll_07<<endl;
        for(int i=0;i<5;i++)
        {
        cout<<"marks " << i+1 << ":" << marks_07[i] <<endl;
        }
        cout << "total marks : " << total_07 << endl;
        cout << "percentage : " << (total_07/5) << "%" << endl; 


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