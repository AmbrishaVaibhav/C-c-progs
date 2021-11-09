#include<iostream>
using namespace std;

class polynomial
{
    int n;
    int *arr;
    public:
        polynomial(){}

        polynomial(int *array, int len)
        {
            n = len;
            arr = new int[n];
            for(int i = 0; i < len; i++)
            {
                arr[i] = array[i];
            }
        }

        polynomial(const polynomial &o)
        {
            n = o.n;
            arr = new int[n];
            for(int i = 0; i < n; i++)
            {
                arr[i] = o.arr[i];
            }
        }

        ~polynomial()
        {
            delete[] arr;
        }

        void display()
        {
            int i;
            for(i = n - 1; i > 0; i--)
            {
                cout << arr[i] << "x^" << i << " + ";
            }
            cout << arr[i] << "x^" << i << endl;
        }

        void add(polynomial p1, polynomial p2);
        void multiply(polynomial p1, polynomial p2);
};

void polynomial :: add(polynomial p1, polynomial p2)
{
    n = (p1.n > p2.n) ? p1.n : p2.n;
    arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        if(i < p1.n && i < p2.n)
        {
            arr[i] = p1.arr[i] + p2.arr[i];
        }
        else if(i > p1.n)
        {
            arr[i] = p2.arr[i];
        }
        else
        {
            arr[i] = p1.arr[i];
        }
    }
}

void polynomial :: multiply(polynomial p1, polynomial p2)
{
    n = p1.n + p2.n - 1;
    arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    for(int i = 0; i < p1.n; i++)
    {
        for(int j = 0; j < p2.n; j++)
        {
            arr[i+j] += p1.arr[i]*p2.arr[j];
        }
    }
}

int main(){
    int n;
    
    cout << "Enter the highest degree of polynomial: ";
    cin >> n;
    n++;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the coefficient of degree " << i << ": ";
        cin >> arr[i];
    }
    polynomial o1(arr, n);

    cout << "Enter the highest degree of second polynomial: ";
    cin >> n;
    n++;
    int arr2[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the coefficient of degree " << i << ": ";
        cin >> arr2[i];
    }
    polynomial o2(arr2, n);
    polynomial o3;
    o3.add(o1, o2);
    polynomial o4;
    o4.multiply(o1, o2);
    o1.display();
    o2.display();
    o3.display();
    o4.display();

    return 0;
}

