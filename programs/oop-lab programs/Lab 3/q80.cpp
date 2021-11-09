#include <iostream>
using namespace std;
void print(char c_07='*', int n_07=80)
{
    for(int i=0;i< n_07;i++)
    {
        cout << c_07;
    }
    cout << endl;
}

int main()
{
    cout <<"\n";
    print();
    cout << "\n";
    print('!');
    cout << "\n";
    print('+', 55);
    return 0;
}