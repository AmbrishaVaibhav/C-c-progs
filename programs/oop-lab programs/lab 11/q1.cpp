#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("test.txt");
    char ch;
    if(!read)
    {
        cout<<"File not created\n"<<endl;
        exit(1); 
    }
    while(read)
    {
        read>>ch;
        cout<<ch;
    }
     read.close();
     return 0;

}