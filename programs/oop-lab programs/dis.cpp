#include<iostream>
using namespace std;

class complex{
    int real_07;
    int img_07;
    public:
    void getdata()
{
    cout << "Enter the real & imaginary part: ";
    cin >> real_07>>img_07;
}

void display()
{
    cout << real_07 << "+ i" << img_07 << endl;
}

complex add(int a, complex c)
{
    complex temp_07;
    temp_07.real_07 = a + c.real_07;
    temp_07.img_07 = c.img_07;
    return temp_07;
}

complex add(complex s1_07, complex c2)
{
    complex temp_07;
    temp_07.real_07 = s1_07.real_07 + c2.real_07;
    temp_07.img_07 = s1_07.img_07 + c2.img_07;
    return temp_07;
}};

int main()
{
    complex s1_07, s2_07, s3_07, s4_07;
    s1_07.getdata();
    s2_07.getdata();
    s3_07 = s3_07.add(9, s2_07);
    s4_07 = s4_07.add(s1_07, s2_07);
    s1_07.display();
    s2_07.display();
    s3_07.display();
    s4_07.display();
    return 0;
}
