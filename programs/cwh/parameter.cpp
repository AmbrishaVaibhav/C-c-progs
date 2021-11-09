#include <iostream>
using namespace std;
class complex 
{
  int a,b;
  public :
  complex(){
      a=0;
      b=0;
  }
  complex(int x ,int y)
  {
      a=x;
      b=y;
  }
  void print()
  {
      cout<<a<<" + "<<b<<"i"<<endl;
  }
  friend void add(complex a1,complex a2);
};
void add(complex a1,complex a2)
{
    complex a3;
    a3.a=a1.a+a2.a;
    a3.b=a1.b+a2.b;
    a3.print();

}
int main()
{
    complex temp;
    complex a(13,14);
    a.print();
    complex b(15,23);
    b.print();
    add(a,b);
    return 0;
}
