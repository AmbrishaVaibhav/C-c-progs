#include <iostream>
using namespace std;
class complex 
{
   int a,b;
   public :

   complex()
   {
       a=0;
       b=0;
   }
   complex(int x,int y)
   {
       a=x;
       b=y;
   }
   complex(int x,float y=4)
   {
       a=x;
       b=y;
      
   }
   complex(float y,int x=2)
   {
       a=x;
       b=y;
   }
   void print()
   {
       cout<<a<<" + "<<b<<"i"<<endl;
   }
};
int main()
{
    complex c1;
    c1.print();
    complex c2(6);
    c2.print();
    complex c3(5,7);
    c3.print();
    complex c4(5.7f);
    c4.print();
 return 0;
}   
