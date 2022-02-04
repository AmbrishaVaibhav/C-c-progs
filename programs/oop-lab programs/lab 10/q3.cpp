#include <iostream>
using namespace std;
template <class T>
int search(T array[],int n,T key)
{
    int i=0;
    for(int i=0;i<n;i++)
    {
    if(array[i]==key)
    {
       return i+1;
       break;
    }}
     
    return -1;
}
int main()
{
    int ar[5]={5,4,3,2,1};
    double ar2[5]={5.5,3.3,4.6,8.9,1.1};
    int a;
    double b;
    cout<<"Enter the element you want to search in list of Integers :"<<endl;
    cin>>a;
    cout<<"Enter the element you want to search in list of double :"<<endl;
    cin>>b;
    int searchint=search(ar,5,a);
    int doublesearch=search(ar2,5,b);
    if(searchint!=-1)
    {
        cout<<"Integer Element found at index :"<<searchint<<endl;
    }
    else{
        cout<<"Integer Element not found "<<endl;
    }
    if(doublesearch!=-1)
    {
        cout<<"Double Element found at index :"<<doublesearch<<endl;
    }
    else{
        cout<<"Double element not found "<<endl;
    }
    return 0;
}
