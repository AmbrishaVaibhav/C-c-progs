#include <iostream>
using namespace std;
template <class T,int size>
class record
{
    T*array;
    int top=-1;
    public:
    record()
    {
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
class student
{
    string name;
    int roll;
    float cgpa;
    public:
    student(){};
    student(string s,int ro,float cg)
    {
        name=s;
        roll=ro;
        cgpa=cg;
    }
    student operator=(const student &obj)
    {
        name=obj.name;
        roll=obj.roll;
        cgpa=obj.cgpa;
        return *this;
    }
    void print()
    {
        cout<<"Name : "<<name;
        cout<<"Roll : "<<roll;
        cout<<"CGPA : "<<cgpa;
    }
   friend ostream &operator<<(ostream &out, const student &obj);
};
ostream &operator<<(ostream &out, const student &obj)
{
   out<<"Name : "<<obj.name<<endl;
   out<<"Roll : "<<obj.roll<<endl;
   out<<"Cgpa : "<<obj.cgpa<<endl;
   return out;
}
int main()
{
    record<student,3>obj;
    student obj1("Ana", 52,7.7);
    student obj2("Ash",56,8.8);
    obj.push(obj1);
    obj.push(obj2);
    obj.print();
    return 0;

}