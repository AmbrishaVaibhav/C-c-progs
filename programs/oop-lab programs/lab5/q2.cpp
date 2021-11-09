#include <iostream>
using namespace std;
class time
{
    int hours,minutes;
    public:
    void display();
    time()
    {
        hours=10;
        minutes=45;
    }
    time(int h,int m=0 )
    {
        hours=h;
       minutes=m;
        
    }
    time(const time &h1,const time &m1)
    {
        hours=h1.hours;
        minutes=m1.minutes;
        }};
  
    void time ::display()
    {
        cout<<hours<<" : "<<minutes<<endl;
    }
    
  

int main()
{
    time t1;
    t1.display();
    time t2(13,30);
    t2.display();
    time t3(t1);
    t3.display();
    time t4(t2);
    t4.display();
    return 0;
   
}