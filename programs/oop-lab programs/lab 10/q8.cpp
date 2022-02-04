#include <iostream>
using namespace std;
template <class T>
class stack
{
    T *array;
    int size;
    int top;
    public:
    stack(int z)
    {
        size=z;
        top=-1;
        array=new T[size];
    }
    int isfull()
    {
        if(top==size-1)
        return 1;
        else
        return 0;
    }
    int isempty()
    {
        if(top==-1)
        return 1;
        else
        return 0;
    }
    void push(T data)
    {
        if(isfull())
        {
            cout<<"Stack overflow\n";
        }
        else
        {
            array[top+1]=data;
            cout<<"Pushed "<<data<<endl;
        }   
    }
    T pop()
    {
        T val;
        if(isempty())
        {
            cout<<"Stack underflow\n";
        }
        else    
        {
            val=array[top-1];
        }
        return val;
    }
    void print()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<array[i]<<endl;
        }
    }
};
int main()
{
    stack<int>obj(4);
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    cout<<"POP : "<<obj.pop()<<endl;
    obj.push(5);
    obj.print();
    return 0;

}