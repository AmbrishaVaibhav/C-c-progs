#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class product
{
    char name[20];
    char code[10];
    float price,total;
    int quantity;
    
public:
    friend void cal(product ob_207[], int n_207);
    void input(char *code_207, char *n_207, float pr_207, int qut_207)
    {
        strcpy(code, code_207);
        strcpy(name, n_207);
        price = pr_207;
        quantity = qut_207;
        total = pr_207 * qut_207;
    }
    void displayproduct()
    {
        cout << left << setw(7) << code << left << setw(20) << name << right << setw(7) << price << right << setw(15) << quantity << right << setw(7) << total << endl;
    }
};
void cal(product ob_207[], int n_207)
{
    float total = 0;
    cout << left << setw(7) << "Code 
                               "<<left<<setw(20)<<" Name "<<right<<setw(7)<<" Price "<<right<<setw(15)<<" Q uantity "<<right<<setw(7)<<" Total "<<endl;
        cout
         << "---------------------------------------------------------" << endl;
    for (int i_207 = 0; i_207 < n_207; i_207++)
    {
        ob_207[i_207].displayproduct();
        total += ob_207[i_207].total;
    }
    cout << "---------------------------------------------------------" << endl;
    cout << " Total = Rs. " << total << endl;
}
int main()
{
    char name_207[20], code_207[10];
    int n_207, quantity_207;
    float price_207;
    cout << "Enter the number of products" << endl;
    cin >> n_207;
    product products_207[n_207];
    cout << "Enter: " << endl;
    for (int i_207 = 0; i_207 < n_207; i_207++)
    {
        cout << "Code: " << endl;
        getchar();
        gets(code_207);
        cout << "Name: ";
        gets(name_207);
        cout << "Price: ";
        cin >> price_207;
        cout << "Quantity: ";
        cin >> quantity_207;
        products_207[i_207].input(code_207, name_207, price_207, quantity_207);
    }
    cal(products_207, n_207);
    return 0;
}