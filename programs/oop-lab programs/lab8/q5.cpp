#include <iostream>
using namespace std;
class complex 
{
    int real;
    int img;
    public:
    friend istream &operator >>(istream &i,complex &ob);
    friend ostream &operator <<(ostream &o, const complex &ob);
    bool operator==(const complex ob)
    {
        if(real==ob.real&&img==ob.img)
        return true;
        else
        return false;
    }
    complex operator =(const complex &ob)
    {
        real=ob.real;
        img=ob.img;
        return *this;
    }

};
istream &operator >>(istream &i,complex &ob)
{
    cout << "Enter the real part: ";
    i >> ob.real;
    cout << "Enter the imaginary part: ";
    i >> ob.img;
    return i;
}
ostream &operator <<(ostream &o, const complex &ob)
{
    o << "Complex number is: ";
    o << ob.real << " + " << ob.img << "i\n";
    return o;
}
int main()
{
    complex ob1,ob2,ob3;
    cin >> ob1 >> ob2;
    if(ob1 == ob2)
        cout << "Both are equal\n";
    else
        cout << "Both are not equal\n";
    ob3 = ob1;
    cout << ob1 << ob2 << ob3;
    return 0;
}
