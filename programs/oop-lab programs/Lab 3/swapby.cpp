#include <iostream>
using namespace std;
void swap(int x_07,int y_07)
{
    cout<<"Call by value swapping"<<endl;
    int temp_07;
    temp_07=x_07;
    x_07=y_07;
    y_07=temp_07;
    cout<<"after swapping x = "<<x_07<<endl;
    cout<<"after swapping y = "<<y_07<<endl;
}
void swapad(int *x_07,int *y_07)
{
    cout<<"Call by address swapping"<<endl;
    int temp_07;
    temp_07=*x_07;
    *x_07=*y_07;
    *y_07=temp_07;
    
}
void swapr(int &x_07,int &y_07)
{
    cout<<"Call by reference swapping"<<endl;
    int temp_07;
    temp_07=x_07;
    x_07=y_07;
    y_07=temp_07;
    
}

int main()
{
     int x_07=45;
     int y_07=30;
     swap(x_07,y_07);
     swapad(&x_07,&y_07);
     cout<<"after swapping x = "<<x_07<<endl;
    cout<<"after swapping y = "<<y_07<<endl;
     swapr(x_07,y_07);
cout<<"after swapping x = "<<x_07<<endl;
    cout<<"after swapping y = "<<y_07<<endl;
     return 0;
}