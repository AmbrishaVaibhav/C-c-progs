#include <iostream>
using namespace std;
float func_area(float);
float func_area(float,float);
float func_area(float,float,float);
void func_area();
int main()
{
    float cir;
    float l,b;
    float len,wid,hig;
    cout<<"Enter the length and breadth of rectangle : ";
    cin>>l>>b;
    cout<<"Enter the length ,breadth and hight of the box : ";
    cin>>len>>wid>>hig;
    cout<<"Enter the area of circle : ";
    cin>>cir;
    func_area();
    cout<<"The area of circle is : "<<func_area(cir)<<endl;
    cout<<"The area of regtangle is : "<<func_area(l,b)<<endl;
    cout<<"The volume of box is : "<<func_area(len,wid,hig)<<endl;
    
}
float func_area(float cir)
{
    return(3.14*cir);
}
float func_area(float l,float b)
{
    return(l*b);
}
float func_area(float len,float wid,float hig)
{
    return(len*wid*hig);
}
void func_area()
{
    cout<<"the results are as follows  : "<<endl;
}

