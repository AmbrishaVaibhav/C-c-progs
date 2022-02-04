#include <iostream>
using namespace std;
template <class T,int size>
class queue
{
    T *array;
    int front=-1,rear=-1;
    public:
    queue()
    {
        array=new T[size];
    }
    int isempty()
    {
        if(rear==-1)
        {
            return 1;
        }
        else
        return 0;
    }
    int isfull()
    {
        if((rear+1)%size==front)
        {
            return 0;
        }
        else return 0;
    }
    void push(T data)
    {
        if(isfull())
        {
            cout<<"queue overflow\n";
        }
        else if(isempty())
        {
            front=rear=0;
            array[rear]=data;
            cout<<"Pushed "<<data<<endl;
        } 
        else{
            rear=(rear+1)%size;
            array[rear]=data;
            cout<<"Pushed "<<data<<endl;
        }
    }
    T pop()
    {
        T val;
        if(isempty())
        {
            cout<<"queue underflow\n";
        }
        else if(front==rear)
        {
            val=array[front];
            front=rear-1;
        }
        else
        {
            val=array[front];
            front=(front+1)%size;
        }
        cout<<"Popped "<<val<<endl;
        return val;

    }
    void print()
    {
        int i=front;
        while(i!=rear)
        {
            cout<<array[i]<<" ";
            i=(i+1)%size;
        }
        cout<<array[rear]<<endl;
    }
};
int main()
{
    queue<int,6>obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    obj.push(6);
    obj.pop();
    obj.pop();
    obj.push(7);
    obj.push(8);
    obj.print();
    return 0;
}