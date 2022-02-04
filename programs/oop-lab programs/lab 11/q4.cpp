#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f1("test5.txt");
    if(!f1)
    {
        cout<<"Failed to create file"<<endl;
        exit(1);
    }
    char ch;
    f1.seekg(0,ios::end);
    int size=f1.tellg();
    cout<<"No of charcters : "<<size<<endl;
    for(int i=1;i<=size;i++)
    {
        f1.seekg(-i,ios::end);
        f1.get(ch);
        cout<<ch;
    }
    f1.close();
    return 0;
}