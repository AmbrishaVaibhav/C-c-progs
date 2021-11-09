#include <iostream>
using namespace std;
class dist
{
    private:
    int feets_07, inches_07;

public:
    void getdata()
    {
        cout << "\nenter feets :";
        cin >> feets_07;
        cout << "\nenter inches :";
        cin >> inches_07;
    }

    
    void add(dist p1_07, dist p2_07)
    {
        inches_07 = p1_07.inches_07 + p2_07.inches_07;
        feets_07 = p1_07.feets_07 + p2_07.feets_07 + (inches_07 / 12);
        inches_07 = inches_07 % 12;
    }

    void display()
    {
        cout << feets_07 << " feets and " << inches_07 << " inches " << endl;
    }


    dist add(dist p2_07)
    {

        dist temp_07;
        temp_07.inches_07 = inches_07 + p2_07.inches_07;
        temp_07.feets_07 = feets_07 + p2_07.feets_07 + (temp_07.inches_07/12);
        temp_07.inches_07 = temp_07.inches_07 % 12;
        return temp_07;
    }
};

int main()
{
    dist p1_07, p2_07, p3_07, p4_07;
    p1_07.getdata();
    p2_07.getdata();
    cout<<endl;
    p1_07.display();
    p2_07.display();
    cout<<"\nthe total distance: \n"<<endl;
    p3_07.add(p1_07,p2_07);
    p3_07.display();
    p4_07 = p1_07.add(p2_07);
    p4_07.display();
    return 0;
}
