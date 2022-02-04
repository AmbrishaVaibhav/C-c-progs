#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number between 0 and 10 : ";
    cin>>num;
    try
    {
        if(num>0&&num<11)
        {
            cout<<"The square of number is : "<<num*num<<endl;;
        }
        else if(num<=0)
        {
            throw((char*)"Zero");
        }
        else if(num>=11)
        {
            throw(num);
        }
        else
        {
            throw(float)num;
        }
    }
    catch(char *msg)
    {
        cout<<"The number should be greater that "<<msg;
    }
    catch(int num)
    {
        cout<<num<<" is greater than 10 , please enter a number less than "<<num<<endl;
    }
    catch(float num)
    {
      cout<<"No specific code executed "<<endl;  
    }
     cout<<"exiting main "<<endl;

}