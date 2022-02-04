#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to find out square root : ";
    cin>>num;
    try
    {
        if(num>0)
        {
            float root=sqrt(num);
            cout<<"The square root of number is : "<<root<<endl;;
        }
        else if(num<0)
        {
            throw(num);
        }
        else if(num==0)
        {
            throw((char*)"Zero");
        }
        else
        {
            throw(float)num;
        }
    }
    catch(char *msg)
    {
        cout<<"The number should be greater than "<<msg<<endl;
    }
    catch(int num)
    {
        cout<<num<<" is a -ve number and -ve numbers are not accepatable "<<endl;
    }
    catch(float num)
    {
        cout<<"No specific code executed "<<endl;
    }
    cout<<"exiting main "<<endl;
}