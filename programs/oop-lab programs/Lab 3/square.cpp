#include <iostream>
using namespace std;
inline int square(int n_07)
{
    return n_07*n_07;
} 

inline int cube(int n_07)
{
    return n_07*n_07*n_07;
}

int main()
{
    int n_07;
    cout<<"enter the number : ";
    cin>>n_07;
    cout<<"the square of the number is :"<<square(n_07)<<endl;
    cout<<"the cube of the number is :"<<cube(n_07)<<endl;
    return 0;

}
