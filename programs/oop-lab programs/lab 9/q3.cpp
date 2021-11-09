#include <iostream>
using namespace std;
#include<string.h>
class bank
{
   protected:
   int acno;
   char name[20];
   int bal;
   public:
   bank(int a,char const *b,int s)
   {
       acno=a;
       strcpy(name,b);
       bal=s;

   }
   virtual void deposit(){}
   virtual void withdraw(){}
   virtual void print(){}
};
class savings:public bank
{
    int min;
    int with;
    public:
    savings(int a,char const *b,int s,int c,int d=400):bank(a,b,s)
    {
        min=d;
       with=c;
    }
    void withdraw()
    {
      if(bal-with<min)
      {
          cout<<"\nCannot withdraw "<<with<<" insufficient balance \n"<<endl;
      }
      else
      {
      bal=bal-with;
      cout<<"Succesfully withdrawn "<<with<<"\n";
      }
    }
    void print()
    {
        cout<<"Details after withdraw attempted "<<endl;
        cout<<"Account nmber : "<<acno<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Balance :"<<bal<<endl;
        cout<<endl;
    }
};
class current :public bank
{
    int due;
    int dep;
    public:
    current(int a,char const *b,int s,int c,int d=-200):bank(a,b,s)
    {
        due=d;
        dep=c;
    }
    void deposit()
    {
        due=due+dep;
        cout<<"Successfully deposited "<<dep<<"\n";
        if(due<0)
        {
            bal=due;
            cout<<bal<<" is overdue"<<endl;
        }
        if(due>=0)
        {
            bal=bal+due;
        }
        
    }
    void print()
    {
        cout<<"\nDetails after depositing"<<endl;
        cout<<"account number : "<<acno<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Balance :"<<bal<<endl; 
    }

};
int main()
{
    bank *ptr[2];
    savings s(124,"Suzane",4000,3900);
    current c(124,"Suzane",400,100);
    ptr[0]=&s;
    ptr[1]=&c;
    ptr[0]->withdraw();
    ptr[0]->print();
    ptr[1]->deposit();
    ptr[1]->print();
    return 0;

}