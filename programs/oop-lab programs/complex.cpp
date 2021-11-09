#include <iostream>
using namespace std;
class complexx
{

    int real_07;
    int imag_07;

public:
    void getdata()
    {
        cout << "enter the real parts : ";
        cin >> real_07;
        cout << "enter the imaginary part : ";
        cin >> imag_07;
    }

    void display()
    {
        static int n_07 = 1;
        cout << "Number" << n_07++ << " : " << real_07 << "+" << imag_07 << "i" << endl;
    }
};
int main()
{
    complexx c_07[10];
    for (int i = 0; i < 10; i++)
    {
        c_07[i].getdata();
    }
    cout << endl;
    cout << "complex numbers are :" << endl;
    for (int i = 0; i < 10; i++)
    {
        c_07[i].display();
    }
    return 0;
}
