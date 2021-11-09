#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class dis
{
    int x;
    int y;
    public:
    dis()
    {
        x=0;
        y=0;
    }
    dis(int a,int b)
    {
        x=a;
        y=b;
    }
    friend void cal(dis a1,dis a2);
    void print()
    {
      cout<<"The point is : "<<"("<<x<<" , "<<y<<")"<<endl; 
    }
};
void cal(dis a1,dis a2)
{
  double temp;
  temp=sqrt((pow((a2.x-a1.x),2)+pow((a2.y-a2.y),2)));
  cout<<"The distance between them is : "<<temp<<endl;  
}
int main()
{
    dis a1(1,1);
    dis a2(1,1);
    a1.print();
    a2.print();
    cal(a1,a2);
    return 0;
}