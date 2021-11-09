#include <iostream>
using namespace std;
class length
{
    int feet;
    int inches;
    static int count;
    public :
    length()
    {
        feet = 0;
        inches = 0;
        ++count;
    }
   length(int a,int b)
   {
       feet = a;
       inches = b;
       ++count;
   } 
   length(const length &p1)
   {
       feet=p1.feet;
       inches=p1.inches;
       ++count;
   }
   ~
  friend void lengthad(length &l1,length &l2);
  void display();
  static void countdis();
  
};
void lengthad(length l1,length l2 )
{
    float n1=l1.feet+l1.inches/12.0;
    float n2=l2.feet+l2.inches/12.0;
    if(n1>n2)
        l1.display();
    else
        l2.display();
}

int main()
{
    length a1;
    length a1(14,15);
    lengthad(a1);
    a1.display();
    a1.countdis();
}
