#include <iostream>
using namespace std;
class salary
{

    string name_07;
    int id_07;
    int age_07;
    int basic_07, DA, HRA;
    double gross;

public:
    void getdata()
    {
        cout << "enter the name: ";
        cin >> name_07;
        cout << "enter the id :";
        cin >> id_07;
        cout << "enter the age :";
        cin >> age_07;
        cout << "enter the basic salary :";
        cin >> basic_07;
        DA = 0.8 * basic_07;
        HRA = 0.1 * basic_07;
        gross = basic_07 + DA + HRA;
    }

    void display()
    {

        cout << endl;
        cout << "Deatils are :" << endl;
        cout << endl;
        cout << "Name: " << name_07 << endl;
        cout << "Age: " << age_07 << endl;
        cout << "Basic salary = " << basic_07 << endl;
        cout << "Gross salary = " << gross << endl;
        cout << "DA = " << DA << endl;
        cout << "HRA = " << HRA << endl; 
        cout << endl;
    }
};

int main()
{
    int n = 0;
    cout << "Enter the number of employe:  ";
    cin >> n;
    salary t[n];
    for (int i = 0; i < n; i++)
        
    {
        cout << "Enter Employee " << i + 1 << " details " << endl;
        t[i].getdata();
    }
   
    for (int i = 0; i < n; i++)
        
    {
         cout << "-------------------------------------------------------" << endl;
        cout << "Employee " << i + 1 << endl;
        t[i].display();
        
    }
    return 0;
}
