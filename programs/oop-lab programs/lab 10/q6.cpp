#include <iostream>
using namespace std;
template <class T>
class vector
{
    T *a;
    int size;
    public:
    vector(T *ar,int s)
    {
        size=s;
        a= new T[size];
        for(int i=0;i<size;i++)
        {
            a[i]=ar[i];
        }
    }
    void modify( T newval,int index)
    {
        if(index>size-1)
        {
            cout<<"Insertion not possible\n";
            return;
        }
        a[index]=newval;
    }
    void multiply(int scalarval)
    {
        for(int i=0;i<size;i++)
        {
            a[i]*=scalarval;
        }
    }
    void display()
    {
        int i=0;
        cout<<" ( ";
        for(i=0;i<size-1;i++)
        {
            cout<<a[i]<<" , ";
        }
        cout << a[i]<< ")\n";
    }
};
int main()
{
    int array[5];
    cout<<"Enter vector elements : "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>array[i];
    }
    vector <int> x(array,5);
    int data,index;
    cout<<"To modify data enter the data and index :"<<endl;
    cin>>data>>index;
    x.modify(data,index-1);
    int data2;
    cout<<"To multiply the value enter the value to multiply :"<<endl;
    cin>>data;
    x.multiply(data);
    x.display();
    return 0;

}