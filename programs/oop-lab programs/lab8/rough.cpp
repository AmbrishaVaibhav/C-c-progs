#include<iostream>
#include<string.h>
using namespace std;

class stringadd
{
    int l;
    char *s;
public:
    stringadd()
    {
        l = 1;
        s = new char[l];
    }
    stringadd(const char *n)
    {
        l = strlen(n);
        s = new char[l + 1];
        strcpy(s, n);
    }
    stringadd(const stringadd &ob)
    {
        l = ob.l;
        delete[] s;
        s = new char[l + 1];
        strcpy(s, ob.s);
    }
    void display()
    {
        cout << s << endl;
    }
    ~stringadd()
    {
        delete[] s;
    }
    stringadd operator+(stringadd ob)
    {
        stringadd obj;
    obj.l = l + ob.l;
    obj.s = new char[obj.l + 1];
    strcpy(obj.s, s);
    strcat(obj.s, ob.s);
    return obj;
    }
    stringadd operator=(const stringadd &ob)
    {
        l = ob.l;
    s = new char[l + 1];
    strcpy(s, ob.s);
    return *this;
    }
};

int main(){
    stringadd ob1("OOP"), ob2("LAB"), ob3;
    ob3 = ob1 + ob2;
    ob1.display();
    ob2.display();
    ob3.display();

    return 0;
}

