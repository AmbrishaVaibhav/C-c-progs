#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream count("test.txt");

    char ch;
    int noch=0,nowo=0,noli=0,noup=0,nolo=0,nodi=0,nosp=0;
     if(!count)
    {
        cout<<"Failed to create file"<<endl;
        exit(1);
    }
    while(count.eof()==0)
    {
       count.get(ch);
       if(ch==' ')
       {
           nowo++;
       }
       if(ch>='a'&ch<='z')
       {
           nolo=nolo+1;
       }
       if(ch>='A'&ch<='Z')
       {
           noup=noup+1;
       }
       if(ch=='#'&&ch=='&'&&ch=='@'&&ch=='/')
       {
           nosp=nosp+1;
       }
       if(ch>='0'&&ch<='9')
       {
           nodi=nodi+1;
       }
       if(ch=='\n')
       {
          noli=noli+1;
       }
       noch++;
    }
    cout<<"Number of characters : "<<noch<<endl;
    cout<<"Number of words : "<<nowo+1<<endl;
    cout<<"Number of lines : "<<noli<<endl;
    cout<<"Number of upercase characters : "<<noup<<endl;
    cout<<"Number of lowercase characters : "<<nolo<<endl;
    cout<<"Number of digits : "<<nodi<<endl;
    cout<<"Number of special :"<<nosp<<endl;
    count.close();
    return 0;

}