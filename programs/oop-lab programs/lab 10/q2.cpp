#include <iostream>
using namespace std;
template <class T>
void Swap(T &x,T &y)
{
    T temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int n1=10, n2=80;
    float f1=20.3, f2=30.5;
    char c1='a',c2='b';
    cout<<"\nBefore swapping :"<<endl;
    cout<<"\nInteger 1 :"<<n1<<"\nInteger 2 :"<<n2<<"\nFloat 1 : "<<f1<<"\nFloat 2 = "<<f2<<"\nChar 1 : "<<c1<<"\nChar 2 : "<<c2<<endl;
    Swap(n1, n2);
    Swap(f1, f2);
    Swap(c1,c2);
    cout<<"\nAfter swapping :"<<endl;
    cout<<"\nInteger 1 :"<<n1<<"\nInteger 2 :"<<n2<<"\nFloat 1 : "<<f1<<"\nFloat 2 = "<<f2<<"\nChar 1 : "<<c1<<"\nChar 2 : "<<c2<<endl;
    
    return 0;
}