#include<iostream>
#include<string.h>
using namespace std;

class myStr
{
    char *string_207;
    int len_207;
    public:
        myStr(){
            string_207 = new char[0];
            len_207 = 0;
        }
        myStr(char *s)//parameterized con
        {
            len_207 =  strlen(s);
            string_207 = new char[len_207 + 1];
            strcpy(string_207, s);
        }

        myStr(const myStr &o)
        {
            len_207 = o.len_207;
            string_207 = new char[o.len_207 + 1];
            strcpy(string_207, o.string_207);
        }

        void display()
        {
            cout << string_207 << endl;
        }
        void concat(myStr o1, myStr o2);
        
        ~myStr()
        {
            delete[] string_207;
        }
};

void myStr :: concat(myStr o1, myStr o2)
{
    len_207 = strlen(o1.string_207) + strlen(o2.string_207);
    delete[] string_207; 
    string_207 = new char[len_207 + 1];
    strcpy(string_207, o1.string_207);
    strcat(string_207, o2.string_207);
}

int main(){
    char string_207[40];
    cout << "Enter 1st string: ";
    gets(string_207);
    myStr s1_207(string_207);
    cout << "Enter 2nd string: ";
    gets(string_207);
    myStr s2_207(string_207);
    myStr s3_207;
    s3_207.concat(s1_207, s2_207);
    s3_207.display();
    return 0;
}