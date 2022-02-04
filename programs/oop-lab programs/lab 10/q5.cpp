#include <iostream>
using namespace std;
template <class T>
class sum
{
   T x;
   T y;
   public:
   sum(T a,T b)
   {
       x=a;
       y=b;
   }
   T add()
   {
      return x+y;
   }
};
int main()
{
    int s,t;
    cout<<"Enter the integer values : "<<endl;
    cin>>s>>t;
    sum <int> a(s,t);
     float q,p;
    cout<<"Enter the float values : "<<endl;
    cin>>q>>p;
    sum <float> b(q,p);
     double r,u;
    cout<<"Enter the double values : "<<endl;
    cin>>r>>u;
    sum <double> c(r,u);
    cout<<"Sum of integers :"<<a.add()<<endl;
    cout<<"Sum of Float :"<<b.add()<<endl;
    cout<<"Sum of double :"<<c.add()<<endl;
    return 0;
}
