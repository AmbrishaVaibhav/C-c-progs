#include <iostream>
using namespace std;
int sum(int a, int b =10, int c=20)
{
    return (a+b+c);
}
int main()
{
int a,b,c;
cout<<"\nenter the values of a,b,c : ";
cin>>a>>b>>c;
cout<<"For a,b,c : "<<sum(a,b,c)<<"\n";
cout<<"for a ,10,20 : "<<sum(a)<<"\n";
cout<<"for a,b and 20 : "<<sum(a,b)<<"\n";
return 0;
}