#include <iostream>
using namespace std;
int area(int,int);
float area(float);
float area(float,float);
int main()
{
    int l_07,b_07;
    float base_07,hight_07,r_07;
    cout<<"enter the length and breadth of the rectangle : ";
    cin>>l_07>>b_07;
    cout<<"enter the radius of the circle : ";
    cin>>r_07;
    cout<<"enter base and hight of the triangle : ";
    cin>>base_07>>hight_07;
    cout<<"the area of rectangle is : "<<area(l_07,b_07);
    cout<<"\nthe area of circle is : "<<area(r_07);
    cout<<"\nthe area of triangle is :"<<area(base_07,hight_07);


}

int area(int l_07,int b_07)
{
    return(l_07*b_07);
}
float area(float r_07)
{
    return(3.14*r_07*r_07); 
}
float area(float base_07 , float hight_07)
{
     return((base_07*hight_07)/2);
}