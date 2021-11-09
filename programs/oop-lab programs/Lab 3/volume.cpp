#include <iostream>
using namespace std;
float vol(float);
int vol(int,int);
int vol(int,int,int);

int main()
{
    int l_07,w_07,h_07,h2_07,r_07;
    float rad_07;
    cout<<"enter the radius of sphere : ";
    cin>>rad_07;
    cout<<"enter the radius and hight of cylinder : " ;
    cin>>r_07>>h2_07;
    cout<<"enter the length width and hight of the cuboid : ";
    cin>>l_07>>w_07>>h_07;
    cout<<"volume of sphere is : "<<vol(rad_07);
    cout<<"\nvolume of cylinder is : "<<vol(r_07,h2_07);
    cout<<"\nvolume of cuboid is : "<<vol(l_07,w_07,h_07);
}

float vol(float rad_07)
{
    return((4/3)*3.14*rad_07*rad_07*rad_07);
}
int vol(int r_07,int h2_07)
{
    return(3.14*r_07*r_07*h2_07);
}
int vol(int l_07,int w_07,int h_07)
{
    return(l_07*w_07*h_07);
}