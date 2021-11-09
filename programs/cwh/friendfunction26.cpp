#include <iostream>
using namespace std;
class complex 
{
  int real;
  int img;
  public :
  void setdata(int a,int b)
  {
      real=a;
      img=b;
  }
  void display()
  {
      cout<<"the number is : "<<real<<" + "<<img<<endl;
  }
  friend complex add(complex a1,complex a2);
};
complex add(complex a1,complex a2)
{
    complex a3;
    a3.setdata((a1.real+a2.real),(a1.img+a2.img));
    return a3;
}
int main()
{
    complex a1,a2,sum;
    a1.setdata(4,3);
    a1.display();
    a2.setdata(7,8);
    a2.display();
    sum = add(a1,a2);
    sum.display();
    return 0;

}