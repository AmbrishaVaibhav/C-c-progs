#include <iostream>
using namespace std;
#include <string.h>
class media
{
protected:
    char title[50];
    float price;

public:
    media(const char *a, float p)
    {
        strcpy(title, a);
        price = p;
    }
    virtual void display() {}
};

class book : public media
{

    int page;

public:
    book(const char *a, float p, int no) : media(a, p)
    {
        page = no;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Page: " << page << endl;
    }
};

class tape : public media
{
    float time;

public:
    tape(const char *a, float p, float t) : media(a, p)
    {
        time = t;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Time: " << time << endl;
    }
};

int main()
{
    media *bk;
    book ob1("OOP", 1150, 200);
    bk = &ob1;
    cout<<"\n";
    bk->display();
    cout<<"\n";
    tape ob2("DSA", 1000, 500);
    bk = &ob2;
    bk->display();
    return 0;
}