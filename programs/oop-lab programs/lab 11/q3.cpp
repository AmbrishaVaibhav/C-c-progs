#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream ten;
    ten.open("test4.txt",ios::out);
     if(!ten)
    {
        cout<<"Failed to create file"<<endl;
        exit(1);
    }
    string s;
    cout<<"Enter ten strings \n";
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the string : ";
        cin>>s;
        ten<<s<<endl;
    }
    ten.close();
    ten.open("test4.txt",ios::in);
    for(int i=0;i<10;i++)
    {
        ten>>s;
        cout<<s<<endl;;
    }
    ten.close();
    return 0;
}

