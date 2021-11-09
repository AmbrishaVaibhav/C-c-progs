#include <iostream>
using namespace std;

class arradd
{
    int *arr;
    int len;

public:
    arradd()//default
    {
        arr = new int[1];
        len = 0;
    }

    arradd(int *array, int n)//parameterized
    {
        len = n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = array[i];
        }
    }

    arradd(const arradd &ob)//creates obj
    {
        len = ob.len;
        arr = new int[len];
        for (int i = 0; i < len; i++)
        {
            arr[i] = ob.arr[i]; 
        }
    }

    ~arradd(){
        delete[] arr;
    }

    void add(arradd ar1, arradd ar2);

    void display()
    {
        for (int i = 0; i < len; i++)
        {
            cout << " " << arr[i];
        }
        cout << "\n";
    }
};

void arradd ::add(arradd ar1, arradd ar2)
{
    len = ar1.len + ar2.len;
    delete[] arr;
    arr = new int[len];
    int i = 0;
    for (i = 0; i < ar1.len; i++)
    {
        arr[i] = ar1.arr[i];
        if(i < ar2.len)
        {
            arr[i + ar1.len] = ar2.arr[i];
        }
    }
}

int main()
{
    int arr_207[30], n_207;
    cout << "Enter the number of elements of array 1: ";
    cin >> n_207;
    cout << "Enter the elements: ";
    for(int i_207 = 0; i_207 < n_207; i_207++)
    {
        cin >> arr_207[i_207];
    }
    arradd a1_207(arr_207, n_207);

    cout << "Enter the number of elements of array 2: ";
    cin >> n_207;
    cout << "Enter the elements: ";
    for(int i_207 = 0; i_207 < n_207; i_207++)
    {
        cin >> arr_207[i_207];
    }
    arradd a2_207(arr_207, n_207);
    arradd a3_207;
    a3_207.add(a1_207, a2_207);
    
    a1_207.display();
    a2_207.display();
    a3_207.display();

    return 0;
}