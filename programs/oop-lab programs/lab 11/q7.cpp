#include <iostream>
#include <fstream>
using namespace std;
int main()
{
     fstream record("student.txt",ios::in|ios::out|ios::trunc);
     if(!record)
    {
        cout<<"File not created\n"<<endl;
        exit(1); 
    }
     char name[20];
     char gender[10];
     int i=0;
     int roll,phy,chem,maths;
     cout<<"Enter the name of student :";
     gets(name);
     record<<name<<endl;
     cout<<"Enter roll number of the student : ";
     cin>>roll;
     record<<roll<<endl;
     cout<<"Enter the gender of student : ";
     cin>>gender;
     record<<gender<<endl;
     cout<<"Enter the marks of phy , chem and maths : ";
     cin>>phy;
     cin>>chem;
     cin>>maths;
     record<<phy<<endl;
     record<<chem<<endl;
     record<<maths<<endl;
     record>>name;
     record>>roll;
     record>>gender;
     record>>phy;
     record>>chem;
     record>>maths;
     float avg=0;
     avg=(phy+chem+maths)/3.0;
     cout<<"Avg marks : "<<avg<<endl;
     return 0;
}
     



