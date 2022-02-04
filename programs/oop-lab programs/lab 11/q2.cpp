#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch;
    fstream copy1,copy2;
    copy1.open("Test2.txt",ios::in);
    copy2.open("Test3.txt",ios::out);
    if(!copy1||!copy2)
    {
        cout<<"Failed to create file"<<endl;
        exit(1);
    }
    while(copy1.eof()==0)
    {
        copy1.get(ch);
        copy2.put(ch);
    }
    cout<<"Copied\n";
    copy1.close();
    copy2.close();
    return 0;
}