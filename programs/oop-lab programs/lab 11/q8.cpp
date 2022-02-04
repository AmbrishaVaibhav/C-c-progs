#include <iostream>
#include <fstream>
using namespace std;
class student
{
    int roll;
    char name[20];
    int age;
    public :
    void readrecord()
    {
        cout<<"Enter the name of student : ";
        gets(name);
        cout<<"Enter the roll : ";
        cin>>roll;
        cout<<"Enter the age :";
        cin>>age;
        cout<<"\n";
    }
    void writerecord()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main()
{
    fstream file;
    file.open("test8.txt",ios::in|ios::out|ios::trunc);
    student one, two;
    cout<<"Enter the details of student "<<endl;
        one.readrecord();
        file.write((char*)&one,sizeof(one));
    file.seekg(0);
    cout << "Student details are \n";
    file.read((char*)&two, sizeof(two));
        two.writerecord();
    file.close();
    return 0;
} 
    
