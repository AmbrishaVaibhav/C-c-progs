#include <iostream>
using namespace std;
template <class T>
class set
{
    T a[];
    T b[];
    int size1,size2;

    public:
    set(T c[],T d[],int size11, int size22)
    {
      
       for(int i=0;i<size1-1;i++)
     {
        
         for(int j=0;j<size2-1;j++)
         {
             if(a[i]==b[j])
             {
                 return a[i];

             }
         }
     }
    }
    T findintersection(T a[],T b[],int size1,int size2)
{
   
    cout<<"The intesecting values are : "<<endl;
     for(int i=0;i<size1-1;i++)
     {
         for(int j=0;j<size2-1;j++)
         {
             if(a[i]==b[j])
             {
                 return a[i];

             }
         }
     }
};
int main()
{
    int size1,size2;
       cout<<"Enter the number of elements you want to enter :";
       cin>>size1;
       cout<<"Enter the values of array 1 : "<<endl;
       for(int i=0;i<size1;i++)
       {
           cout<<"Enter the value "<<i<<" : ";
           cin>>T a[i];
           
       }
       cout<<"Enter the number of elements you want to enter  :";
       cin>>size2;
       cout<<"Enter the values of array 2 : "<<endl;
       for(int i=0;i<size2;i++)
       {
           cout<<"Enter the value "<<i<<" : ";
           cin>>T b[i];
       }
        set <int> p(a[],b[],size1,size2)
       

}
