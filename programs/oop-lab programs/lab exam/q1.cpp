#include <iostream>
using namespace std;
class z;
class y;
class x
{
    int n1;
    public :
    friend void greatest(x, y,z);
    void setData(int a)
    {
        n1 = a ;
    }
    void display()
    {
        cout << "The value of data member is " << n1 << endl;
    }
};
class y
{
    int n2;
    public :
    friend void greatest(x, y,z);
    void setData(int b)
    {
        n2 = b;
    }
    void display()
    {
        cout << "The value of data member is " << n2 << endl;
    }
};

class z
{
    int n3;
    public :
    friend void greatest(x, y,z);
    void setData(int c)
    {
        n3 = c;
    }
    void display()
    {
        cout << "The value of data member is " << n3 << endl;
    }
};
    
void greatest(x obj1, y obj2,z obj3){
   if(obj1.n1>obj2.n2 && obj1.n1>obj3.n3)
   {
       cout<<"Gratest number is : "<<obj1.n1<<endl;
   }
   else if(obj2.n2>obj1.n1&&obj2.n2>obj3.n3)
   {
       cout<<"Gratest number is : "<<obj2.n2<<endl;
   }
   else
   {
       cout<<"Greatest number is : "<<obj3.n3<<endl;
   }
}

 
int main(){
   x o1;
    y o2;
    z o3;
    int u,v,t;
    cout<<"enter three values : "<<endl;
    cin>>u>>v>>t;
    o1.setData(u);
   o2.setData(v);
   o3.setData(t);
   cout<<"Values are : "<<endl;
    o1.display();
   o2.display();
   o3.display();
   greatest(o1,o2,o3);
    return 0;
}