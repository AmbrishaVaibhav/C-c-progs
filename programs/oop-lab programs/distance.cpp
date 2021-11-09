#include <iostream>
#include<math.h>
using namespace std;

class distan
{
    int x_07,y_07;
    public:
    void getdata()
    {
        cout << "enter the value of x cooradinate" << endl;
        cin >> x_07;
        cout << "enter the value of y cooradinate" << endl;
        cin >> y_07;
    }

    void display()
    {
        cout << "("<<x_07<<","<<y_07<<")"<<endl;
    }

    double calc(distan a_07, distan b_07)
    {
        return sqrt(pow(b_07.y_07 - a_07.y_07, 2) + pow(b_07.x_07 - a_07.x_07, 2));
    }

};

int main()
{
    distan a1_07,a2_07;
    
    a1_07.getdata();
    a2_07.getdata();
    cout << "Coordinate 1 " << endl;
    a1_07.display();
    cout << "Coordinate 2 " << endl;
    a2_07.display();
    a1_07.calc(a1_07,a2_07);
    cout<<"Distance between them = " << a1_07.calc(a1_07,a2_07) << endl;
return 0;
}

    


