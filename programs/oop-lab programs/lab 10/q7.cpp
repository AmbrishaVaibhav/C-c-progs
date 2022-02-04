#include <iostream>
using namespace std;
template <class T>
class Pair
{
    T x,y;
    public:
    Pair(T a, T b)
    {
        x=a;
        y=b;
    }
    T get_max()
    {
        if(x>y)
        {
            return x;
        }
        else
        return y;
    }
};
int main()
{
    Pair <int> p(4,5);
    Pair <float> q(5.5,6.6);
    cout<<p.get_max()<<endl;
    cout<<q.get_max()<<endl;
    return 0;
}