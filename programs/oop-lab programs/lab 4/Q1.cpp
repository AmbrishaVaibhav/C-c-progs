#include <iostream>
using namespace std;
class y;
class x
{
    int a_07;
    public :
    friend void swap(x&, y&);
    void setData(int c_07)
    {
        a_07 = c_07;
    }
    void display()
    {
        cout << "The value of data member is " << a_07 << endl;
    }
};

class y
{
    int b_07;
    public :
    friend void swap(x&, y&);
    void setData(int d_07)
    {
        b_07 = d_07;
    }
    void display()
    {
        cout << "The value of data member is " << b_07 << endl;
    }
};

void swap(x &obj1, y &obj2){
    int temp = obj1.a_07;
    obj1.a_07 = obj2.b_07;
    obj2.b_07 = temp;
}

 
int main(){
   x a1;
    y b2;
    int e_07,f_07;
    cout<<"enter the values of the two integers : "<<endl;
    cin>>e_07>>f_07;
    a1.setData(e_07);
   b2.setData(f_07);
   cout<<"Values befor swapping "<<endl;
    a1.display();
   b2.display();
    cout<<"Values after swapping "<<endl;
    swap(a1,b2);
    a1.display();
    b2.display();
    return 0;
}