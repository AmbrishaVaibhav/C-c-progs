#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    void input()
    {
        cout << "enter the real and img part : ";
        cin >> real >> img;
    }

    void add(complex s1, complex s2)
    {
        real = s1.real + s2.real;
        img = s1.img + s2.img;
    }


complex add(int x, complex s2)
{
    complex t;
    t.real = x+ s2.real;
    t.img = s2.img;
    return t;
}

void display()
{
    cout << "\nComplex number is" << real << "+"<< "i" << img;
}
}
;

int main()
{
    complex s1, s2, s3;
    int x;
    s1.input();
    s2.input();
    s2.add(s1, s2);
    s3.display();
    cout << "\nEnter a real Part - ";
    cin >> x;
    s3 = s3.add(x, s2);
    s3.display();
    return 0;
}