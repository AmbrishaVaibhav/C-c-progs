#include <iostream>
using namespace std;
class timee
{
    int hour,min,sec;
    public:
    timee()
    {
        hour=0;
        min=0;
        sec=0;
    }
    timee(int a,int b,int c)
    {
        hour=a;
        min=b;
        sec=c;
    }
    void print()
    {
        cout<<"time is "<<hour<<" hours : "<<min<<" minutes : "<<sec<<" seconds "<<endl;
    }
    timee operator ++()
    {
        ++sec;
        if(sec>59)
        {
            ++min;
            sec=sec-60;
        }
         if(min>59)
        {
            ++hour;
            min=min-60;
        }
        return *this;
    }
     timee operator ++(int)
    {
        sec++;
        if(sec>59)
        {
            min++;
            sec=sec-60;
        }
         if(min>59)
        {
            hour++;
            min=min-60;
        }
        return *this;
    }
    timee operator --()
    {
        if(sec>0)
        {
        --sec;
        }
        else 
        {
             sec=sec+59;
            if(min>0)
            {
            --min;
           
            }
            else{
              --hour;
            min=min+59;  
            }
        }
         
        return *this;
    }
     timee operator --(int)
    {
        if(sec>0)
        {
        sec--;
        }
        else 
        {
             sec=sec+59;
            if(min>0)
            {
            min--;
           
            }
            else{
              hour--;
            min=min+59;  
            }
        }
    }
};
int main()
{
    timee t(10,59,59);
    timee i(07,59,59);
    timee m(06,00,00);
    timee e(07,59,00);
    timee ob1,ob2;
    ++t;
    ob1=i++;
    --m;
    ob2=e--;
    t.print();
    ob1.print();
    m.print();
    ob2.print();
    
   
    
    
    return 0;

}