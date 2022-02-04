#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    fstream convert("test.txt",ios::in|ios::out|ios::trunc);
     if(!convert)
    {
        cout<<"Failed to create file"<<endl;
        exit(1);
    }
    char ch[100];
    cout<<"Enter a string you want to convert from lower to upper case and vise versa :"<<endl;
    gets(ch);
    convert.seekp(0);
    int i=0;
    while(ch[i])
    {
        convert.put(ch[i]);
        i++;

    }
    char c;
    convert.seekg(0);\
    while(convert)
    {
        convert.get(c);
        if(isupper(c))
        {
            c=c+32;
        }
        else if(islower(c))
        {
            c=c-32;
        }
        convert.seekg(-1,ios::cur);
        convert.put(c);
    }
    convert.clear();
    cout<<convert.tellg()<<endl;
    convert.seekg(0);
    while(convert.eof()==0)
    {
        convert.get(c);
        cout<<c;
    }
    convert.close();
    return 0;

}