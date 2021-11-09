#include <iostream>
#include <string.h>
using namespace std;
class office
{
    private:
    string name;
    int code;
    public:
    void getdata();
    void display();
};
class type:public office
{
    private:
    int speed;
    public:
    void getdata();
    void display();
};
void office::getdata()
{
    cout<<"Name :";
    getline(cin,name);
    cout<<"code :";
    cin>>code;

}
void office::display()
{
    cout<<"Name :"<<name<<endl;
    cout<<"Code :"<<code<<endl;
}
void type::getdata()
{
   cout<<"speed :";
    cin>>speed;

}
void type::display()
{
    cout<<"speed :"<<speed<<endl;
}
int main()
{
    type t;
    t.office::getdata();
    t.getdata();
    t.office::display();
    t.display();
    return 0;
}