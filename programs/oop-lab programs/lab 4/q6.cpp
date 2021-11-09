#include <iostream>
using namespace std;
class y;
class x
{
    int a_07;
    public :
    friend void great(x, y);
    void setData(int c_07)
    {
        a_07 = c_07;
    }
    void display()
    {
        cout << "The value of greatest data member is " << a_07 << endl;
    }
};

class y
{
    int b_07;
    public :
    friend void great(x, y);
    void setData(int d_07)
    {
        b_07 = d_07;
    }
    void display()
    {
        cout << "The value of the greatest data member is " << b_07 << endl;
    }
};
 void great(x obj1,y obj2)
 {
     if(obj1.a_07>obj2.b_07)
     {
         obj1.display();
     }
     else{
         obj2.display();
     }
 }
 int main()
 {
     x obj1;
     y obj2;
     obj1.setData(45);
     obj2.setData(30);
     great(obj1,obj2);
     return 0;
 }