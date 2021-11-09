#include<iostream>
#include<string.h>
using namespace std;

class bank_account
{
    char name_07[20];
    int acc_num_07;
    char AccType_07[20];
    float balance_07;
    int checkBalance(int amount_07);
    public:
        void setData(char *p_07, int accNum_07, char *accType_07, float bal_07);
        void deposit(float amount_07);
        void withdraw(float amount_07);
        void display() const;
};

int bank_account :: checkBalance(int amount_07)
{
    if((balance_07 - amount_07) < 500)
        return 0;
    else
        return 1;
}

void bank_account :: setData(char *p_07, int accNum_07, char *accType_07, float bal_07)
{
    strcpy(name_07, p_07);
    acc_num_07 = accNum_07;
    strcpy(AccType_07, accType_07);
    balance_07 = bal_07;
}

void bank_account :: deposit(float amount_07)
{
    balance_07 += amount_07;
    cout << amount_07 << " has been deposited to your account!" << endl;
}

void bank_account :: withdraw(float amount_07)
{
    if(checkBalance(amount_07))
    {
        balance_07 -= amount_07;
        cout << "Transaction Successful!" << endl;
    }
    else
        cout << "You do not have sufficient amount!" << endl;
}

void bank_account :: display() const
{
    cout << "Name: " << name_07 << endl;
    cout << "Account number: " << acc_num_07 << endl;
    cout << "Account type: " << AccType_07 << endl;
    cout << "Balance: " << balance_07 << endl;
}

int main(){
    char name_07[20], accType_07[20];
    int accNum_07, amount_07, a_07;
    float accBal_07;
    bank_account acc_07;

    cout << "Enter name: ";
    gets(name_07);
    cout << "Enter account number: ";
    cin >> accNum_07;
    cout << "Enter account type: ";
    getchar();
    gets(accType_07);
    cout << "Enter the amount in account: ";
    cin >> accBal_07;
    
    acc_07.setData(name_07, accNum_07, accType_07, accBal_07);

    do
    {
        cout << "Enter\n1 to deposit\n2 to withdraw\n0 to exit" << endl;
        cin >> a_07;
        if(a_07 == 1)
        {
            cout << "Enter the amount to deposit: " << endl;
            cin >> amount_07;
            acc_07.deposit(amount_07);
        }
        else if(a_07 == 2)
        {
            cout << "Enter the amount to Withdraw: " << endl;
            cin >> amount_07;
            acc_07.withdraw(amount_07);
        }
        else
            break;
    }while(a_07);    
    
    acc_07.display();
    return 0;
}