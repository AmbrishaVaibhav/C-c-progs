#include <iostream>
using namespace std;

int a_07 =40;
int main()
{
    int a_07 = 20;
    cout<<"the value of local a is : "<<a_07<<endl;

    cout<<"the value of global a is : "<<::a_07<<endl;
    return 0;
}