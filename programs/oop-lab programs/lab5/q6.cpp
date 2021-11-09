#include<iostream>
using namespace std;
class count
{
    int n;
    static int countt;
    public :
    count()
    {
        countt++;
    }
    count(int p)
    {
        n=p;
        countt++;
    }
    static void print()
    {
         cout<<"No of objects created :  "<<countt<<endl;
    }
};
int count ::countt=0;

int main()
{
    count c1(8);
    count c2(10);
    count c3(11);
    {
        c3.print();
    }
    
}