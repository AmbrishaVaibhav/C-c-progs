#include <iostream>
using namespace std;
#include<string.h>
class book
{
    char name[30];
    char author[30];
    int price;
    public :
    void input(char *a,char *b, int c)
    {
           strcpy(name , a);
           strcpy(author , b);
           price=c;
    }
    void display()
    {
        cout<<"Name -  "<<name<<endl;
        cout<<"Author - "<<author<<endl;
        cout<<"price - "<<price<<endl;

    }
    friend void range(int n,int up,int low,book *obj);
};
    void range(int n,int up,int low,book *obj)
    {
        for(int i=0;i<n;i++)
        {
            if(obj[i].price>low && obj[i].price<up)
            {
                obj[i].display();
            }
        }
    }


int main()
{
   char name[30];
   char author[30];
   int n;
   int price,up,low;
   cout<<"enter the number of books :";
   cin>>n;
   book obj[n];
   for(int i=0;i<n;i++)
   {
       cout<<"enter the name,author and price of the book "<<i+1<<": "<<endl;
       cin>>name;
       cin>>author;
       cin>>price;
       obj[i].input(name,author,price);
       cout<<"\n";
   
   }
    cout << "Enter the lower range : ";
    cin >> low;
    cout << "Enter the upper range : ";
    cin >> up;
    cout<<"Books within range are :"<<endl;
    range(n,up,low,obj);
    return 0;
}

