#include <iostream>
using namespace std;
class time
{
    int hour,min,sec;
    public:
    time()
    {
        hour=0;
        min=0;
        sec=0;
    }
    time(int a,int b,int c)
    {
        hour=a;
        min=b;
        sec=c;
    }
    void print()
    {
        cout<<"time is "<<hour<<" hours : "<<min<<" minutes : "<<sec<<" seconds "<<endl;
    }
    friend time operator ++(time &);
    friend time operator ++(time &,int);
    friend time operator --(time &);
    friend time operator --(time &,int);
};

    time operator ++(time &t)
    {
        ++t.sec;
        if(t.sec>59)
        {
            ++t.min;
            t.sec=t.sec-60;
        }
         if(t.min>59)
        {
            ++t.hour;
            t.min=t.min-60;
        }
        return t;
    }
     time operator ++(time &t,int)
    {
        t.sec++;
        if(t.sec>59)
        {
           t.min++;
            t.sec=t.sec-60;
        }
         if(t.min>59)
        {
            t.hour++;
            t.min=t.min-60;
        }
        return t;
    }
    time operator --(time &t)
    {
    
        if(t.sec>0)
        {
        --t.sec;
        }
        else 
        {
             t.sec=t.sec+59;
            if(t.min>0)
            {
            t.min=--t.min;
           
            }
            else{
              --t.hour;
            t.min=t.min+59;  
            }
        }
         
        return t;
    }
     time operator --(time &t,int)
    {
       
        if(t.sec>0)
        {
        t.sec--;
        }
        else 
        {
             t.sec=t.sec+59;
            if(t.min>0)
            {
            t.min--;
           
            }
            else{
              t.hour--;
            t.min=t.min+59;  
            }
        }
        return t;
    }

int main()
{
    time t(10,59,59);
    time i(07,59,59);
    time m(06,00,00);
    time e(07,59,00);
    time ob1,ob2;
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