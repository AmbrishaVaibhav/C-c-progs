#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;
    public:
    friend istream &operator >>(istream &i,Distance &ob);
    friend ostream &operator <<(ostream &o, const Distance &ob);
    Distance operator >(Distance ob)
    {
        int one,two;
        one=feet+(inches/12);
        two=ob.feet+(ob.inches/12);
        if(one>two)
        {
            return *this;
        }
        else 
        return ob;
    }
    bool operator ==(Distance ob)
    {
        int one,two;
        one=feet+(inches/12);
        two=ob.feet+(ob.inches/12);
        return one==two; 
    }
};
istream &operator >>(istream &i,Distance &ob)
{
    cout<<"Enter the value of Distance in feet and inches :\n";
    i>>ob.feet>>ob.inches;
    return i;
}
ostream &operator <<(ostream &o,const Distance &ob)
{
    o<<ob.feet<<"Feets and "<<ob.inches<<"Inches "<<endl;
    return o;
}
int main()
{
    Distance ob1,ob2,ob3;
    cin>>ob1>>ob2;
    ob3=ob1>ob2;
    if(ob1==ob2)
    cout<<"Both are equal"<<endl;
    else
    cout<<"Both are not equal"<<endl;
    cout<<ob1<<ob2<<ob3;
    return 0;
}