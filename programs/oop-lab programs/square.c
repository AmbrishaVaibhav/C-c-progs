#include <iostream>
using namespace std;
inline int square(int n);
{
    return n*n;
}

inline int cube(int n)
{
    return n*n*n;
}

int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    cout<<"the square of the number is :"<<square(n)<<endl;
    cout<<"the cube of the number is :"<<cube(n)<<endl;
    return 0;

}
