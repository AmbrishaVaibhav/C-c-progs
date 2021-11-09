#include <isostream>
using namespace std;
class BankAccount
{
    char *CustomerName;
    char *email;
    int customerID;
    int accountNumber;
    double accountBalance;

}
public :
BankAccount()
{
    CustomerName=new char[1];
    email=new char[1];
    customerID = 0;
    accountNumber = 0;
    accountBalance=0.0;

}
friend void display();
BankAccount(char *n,char *e,int id,int acc,double bal)
{
    CustomerName=new char[sterlen(n)+1];
    email=new char[sterlen(e)+1];
    strcpy(customerName,n);
    strcpy(email,e);
    customerID = id;
    accountNumber = acc;
    accountBalance=bal;
}
BankAccount(const BankAccount &b1)
{
    CustomerName=new char[sterlen(b1.CustomerName)+1];
    email=new char[sterlen(b1.email)+1];
    strcpy(customerName,b1.customerName);
    strcpy(email,b1.email);
    customerID =b1.customerID;
    accountNumber = b1.accountNumber;
    accountBalance=b1.accountBalance;
}
int getBalance(int amt)
{
    if(( accountBalance - amt) < 500)
        return 0;
    else
        return 1;
}
void withdraw(int amt)
{
    if(getBalance(amt))
    {
        accountBalance - =amt;
        cout<<"Amount withdrawn "<<endl;
    }
    else
    cout<<"Account lacks sufficient amount"<<endl;
}};
void display()const
{
    cout<<"Name :"<<customerName<<endl;
    cout<<"ID : "<<customerID<<endl;
    cout<<"Email : "<<email<<endl;
    cout<<"accountnumber :"<<accountNumber
    }