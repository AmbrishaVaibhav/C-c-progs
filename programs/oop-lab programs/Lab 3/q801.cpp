#include <iostream>
using namespace std;
void print()
{
     for(int i=0;i< 80;i++)
    {
        cout << "*";
    }
    cout << endl;

}

void print(char c_07)
{
   
   for(int i=0;i< 80;i++)
    {
        cout << c_07;
    }
    cout << endl;
}

void print(int n_07)
{
   for(int i=0;i< n_07;i++)
    {
        cout << "*";
    }
    cout << endl;
}

void print(char c_07,int n_07)
{
    
for(int i=0;i< n_07;i++)
    {
        cout << c_07;
    }
    cout << endl;


}

int main()
{
    char c_07;
    int n_07;
    print();
    cout<<"enter the char and number : ";
    cin >> c_07 >> n_07;
    cout<<"\n";
    print(c_07);
    cout <<"\n";
    print(n_07);
    cout <<"\n";
    print(c_07,n_07);
    return 0;
}