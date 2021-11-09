#include <iostream>
using namespace std;

class polyno
{
    int p;
    int *array;

public:
    polyno() {}

    polyno(int *arrayay, int len)
    {
        p = len;
        array = new int[p];
        for (int i = 0; i < len; i++)
        {
            array[i] = arrayay[i];
        }
    }

    polyno(const polyno &o)
    {
        p = o.p;
        array = new int[p];
        for (int i = 0; i < p; i++)
        {
            array[i] = o.array[i];
        }
    }

    ~polyno()
    {
        delete[] array;
    }

    void display()
    {
        int i;
        for (i = p - 1; i > 0; i--)
        {
            cout << array[i] << "x^" << i << " + ";
        }
        cout << array[i] << "x^" << i << endl;
    }

    void add(polyno p1_207, polyno p2_207);
    void multiply(polyno p1_207, polyno p2_207);
};

void polyno ::add(polyno p1_207, polyno p2_207)
{
    p = (p1_207.p > p2_207.p) ? p1_207.p : p2_207.p;
    array = new int[p];
    for (int i = 0; i < p; i++)
    {
        if (i < p1_207.p && i < p2_207.p)
        {
            array[i] = p1_207.array[i] + p2_207.array[i];
        }
        else if (i > p1_207.p)
        {
            array[i] = p2_207.array[i];
        }
        else
        {
            array[i] = p1_207.array[i];
        }
    }
}

void polyno ::multiply(polyno p1_207, polyno p2_207)
{
    p = p1_207.p + p2_207.p - 1;
    array = new int[p];
    for (int i = 0; i < p; i++)
    {
        array[i] = 0;
    }

    for (int i = 0; i < p1_207.p; i++)
    {
        for (int j = 0; j < p2_207.p; j++)
        {
            array[i + j] += p1_207.array[i] * p2_207.array[j];
        }
    }
}

int main()
{
    int p;

    cout << "Enter the highest degree of polynomial : ";
    cin >> p;
    p++;
    int array[p];
    for (int i = 0; i < p; i++)
    {
        cout << "Enter the coefficient of degree " << i << ": ";
        cin >> array[i];
    }
    polyno po1_207(array, p);

    cout << "Enter the highest degree of second polynomial : ";
    cin >> p;
    p++;
    int array2[p];
    for (int i = 0; i < p; i++)
    {
        cout << "Enter the coefficient of degree " << i << ": ";
        cin >> array2[i];
    }
    polyno po2_207(array2, p);
    polyno po3_207;
    po3_207.add(po1_207, po2_207);
    polyno po4_207;
    po4_207.multiply(po1_207, po2_207);
    po1_207.display();
    po2_207.display();
    po3_207.display();
    po4_207.display();

    return 0;
}
