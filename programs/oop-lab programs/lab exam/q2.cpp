#include<iostream>
#include<cstring>
using namespace std;

class patient
{
    char name[30];
    char address[50];
    char phone[20];
    
public:
    patient(){}
    patient(const char *n, const char *a, const char *p)
    {
        strcpy(name, n);
        strcpy(address, a);
        strcpy(phone, p);
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone << endl;
    }
};

class hospital_expenses : virtual public patient
{
    int rent;
    int days;
    int nodoc;
    int docfees;
    int c;
    int b;
public:
    hospital_expenses(){}
    hospital_expenses(const char *n, const char *a, const char *p,int r,int d,int doc,int ndoc) : patient(n, a, p)
    {
        rent=r;
        days=d;
        nodoc=doc;
        docfees=ndoc;
        c=rent*days;
        b=doc*nodoc;

    }
    int rcal()
    {
        return c+b;
    }
    void printhospital()
    {
        cout<<"Rent expenses : "<<c<<endl;
        cout<<"Doctor expense : "<<b<<endl;
        cout<<"Total hospital expenses : "<<c+b<<endl;
    }
};

class medical_testing_expenses : virtual public patient
{
    char test[30];
    int cost;
public:
    medical_testing_expenses(){}
    medical_testing_expenses(const char *n, const char *a, const char *p, const char *c,int tot) : patient(n, a, p)
    {
       strcpy(test,c);
       cost=tot;
    }
    int  rexp()
    {
        return cost;
    }
    void printtest()
    {
        cout<<"Test : "<<test<<endl;
        cout<<"Cost : "<<cost<<endl;
    }
};

class total_medical_expenses : public hospital_expenses, public medical_testing_expenses
{
    int total;
public:
    total_medical_expenses(){}
    total_medical_expenses(const char *n, const char *a, const char *p,int r,int d,int doc,int ndoc, const char *c,int tot) : patient(n, a, p), hospital_expenses(n, a, p,r,d,doc,ndoc), medical_testing_expenses(n, a, p,c,tot)
    {
       total=rexp()+rcal();
            if(total > 500000)
                throw 1;
        
    }
    void printtotal()
    {
        print();
        printhospital();
        printtest();
        cout << "Total expense : " << total<< endl;
    }
};

int main(){
    try{
        total_medical_expenses obj("Ram", "Jaipur", "6299453968", 50, 10, 5, 500,"Sugar test ",5000);
        obj.printtotal();

    }
    catch(int x)
    {
        cout << "Total expense is more than the limit : 500000 \n";
    }
    cout << "Exiting main\n";
    return 0;
}