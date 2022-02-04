#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int cuday,cumonth,cuyear,exday,exmonth,exyear;
    cout<<"Enter the current date in dd mm yyyy format :";
    cin>>cuday>>cumonth>>cuyear;
    cout<<"Enter the expiry date in dd mm yyyy format :";
    cin>>exday>>exmonth>>exyear;
    try
    {
        if(cuyear==exyear)
        {
            if(cumonth==exmonth)
            {
                if(cuday>=exday)
                {
                    throw((char*)"the product has expired");
                }
                else
                {
                    cout<<"The product has not expired "<<endl;
                }
            }
            else if(cumonth>exmonth)
            {
                throw(cumonth);
            }
            else
            {
                cout<<"Product has not expired "<<endl;
            }
        }
        else if(cuyear>exyear)
        {
            throw(float)cuyear;
        }
        else
        {
             cout<<"The product has not expired "<<endl;
        }

    }
    catch(char *msg)
    {
        cout<<msg<<endl;
    }
    catch(int num)
    {
        cout<<"The product is expired "<<endl;
    }
    catch(float num)
    {
        cout<<"The product is expired "<<endl;
    }
    cout<<"Exiting main"<<endl;
}   
