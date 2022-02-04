#include <iostream>
using namespace std;
template <class T>
T min(T array[],int n)
{
    int i=0;
    T min=array[0];
    for(int i=0;i<n;i++)
    {
    if(array[i]<min)
    {
        min=array[i];
    }
    }
    return min;
}
int main()
{
    int ar[5]={5,4,3,2,1};
    float ar2[5]={5.5,3.3,4.6,8.9,1.1};
    int int_min=min(ar,5);
    float float_min=min(ar2,5);
    cout<<"\nThe min val of integer array is :";
    cout<<int_min;
    cout<<"\nThe min val of float array is :";
    cout<<float_min;
    return 0;
}
