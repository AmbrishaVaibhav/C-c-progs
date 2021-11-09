#include <iostream>
using namespace std;
class test
{
    int n;
    int *arr;
    public:
    friend istream &operator >>(istream &i,test &ob);
    friend ostream &operator <<(ostream &o, const test &ob);
};
istream &operator>>(istream &ip, test &ob)
{
    cout << "Enter the size of array: ";
    ip >> ob.n;
    ob.arr = new int[ob.n];
    cout << "Enter the elements of array:\n";
    for(int i = 0; i < ob.n; i++)
    {
        cout << "arr[" << i << "]: ";
        ip >> ob.arr[i];
    }
    return ip;
}

ostream &operator<<(ostream &o, const test &ob)
{
    o << "Array: ";
    for(int i = 0; i < ob.n; i++)
    {
        o << ob.arr[i] << " ";
    }
    o << endl;
    return o;
}

int main(){
    test ob;
    cin>>ob;
    cout<<ob;
    return 0;
}