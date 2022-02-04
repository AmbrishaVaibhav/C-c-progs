#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the numbers : ";
    cin>>num1>>num2;
   try
   {
    if(num2!=0)
    {
        float rem=(float)num1/num2;
        cout<<"Remainder : "<<rem<<endl;
    }
    else
    {
        throw(num2);
    }
   }
   catch(int num2)
   {
       cout<<"Division by zero error occured \n"<<endl;
   }
   cout<<"Exiting main"<<endl;
}
