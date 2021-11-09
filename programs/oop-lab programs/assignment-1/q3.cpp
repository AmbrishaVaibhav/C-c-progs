#include <iostream>
using namespace std;
struct birthdate
{
    int data, month, year;
};

class age
{
    struct birthdate current;
    struct birthdate birthday;

public:
    void input(int d, int m, int y)
    {
        current.data = d;
        current.month = m;
        current.year = y;
    }

    void dob(int d, int m, int y)
    {
        birthday.data = d;
        birthday.month = m;
        birthday.year = y;
    }
    void display();
};

void age ::display()
{
    int year, months, days;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (birthday.data > current.data)
    {
        current.data += month[birthday.month - 1];
        current.month--;
    }

    if (birthday.month > current.month)
    {
        current.year--;
        current.month += 12;
    }

    days = current.data - birthday.data;
    months = current.month - birthday.month;
    year = current.year - birthday.year;
    cout << " AGE : " << year << " years " << months << " months " << days << " days\n";
}

int main()
{
    age obj_207;
    int d_207, m_207, y_207;
    cout << "Enter today's day in dd.mm.yyyy format: ";
    cin >> d_207 >> m_207 >> y_207;
    obj_207.input(d_207, m_207, y_207);
    cout << "Enter your birthday in dd.mm.yyyy format: ";
    cin >> d_207 >> m_207 >> y_207;
    obj_207.dob(d_207, m_207, y_207);
    obj_207.display();
    return 0;
}
