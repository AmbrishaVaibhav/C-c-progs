#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element "<<i<<" : ";
        cin>>arr[i];
    }
    int index;
        cout<<"\nEnter the index you want to print : ";
        cin>>index;
        try
        {
            if(index>0&&index<size)
            {
                cout<<arr[index];
            }
            else if(index<0)
            {
                throw(index);
            }
            else if(index>=size)
            {
                throw((char*)"cannot be equal to or greater than size of the array");
            }
        }
        catch(int index)
        {
            cout<<"The index cannot be a -ve number , "<<index<<" is -ve"<<endl;
        }
        catch(char *msg)
        {
            cout<<"The number "<<msg;
        }
        cout<<"\nExiting main"<<endl;
    }
