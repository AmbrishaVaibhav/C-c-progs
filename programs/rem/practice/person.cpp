#include <iostream>
#include <string.h>
using namespace std;
class person
{
    char name[20];
    char add[100];
    int phoneno;
    int sal;
    public:
    person(){}
    person(char n[20],char a[100],int p,int s)
    {
        strcpy(name, n);
        strcpy(add,a);
        phoneno=p;
        sal=s;
    }
    


};