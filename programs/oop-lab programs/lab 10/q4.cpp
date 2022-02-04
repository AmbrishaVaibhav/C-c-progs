#include <iostream>
using namespace std;
template <class T>
void Swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
template <class T, int size>
void Sortt(T a[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; i < j; j--)
        {
            if (a[j] < a[j - 1])
             {
                Swap(a[j], a[j - 1]);
        }}
    }
}

int main()
{
    int arr[]={5,9,3,2,1};
    const int size=sizeof(arr)/sizeof(arr[0]);
    Sortt<int, size>(arr);
  
    cout << "Sorted Array is: ";
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }

return 0;
}