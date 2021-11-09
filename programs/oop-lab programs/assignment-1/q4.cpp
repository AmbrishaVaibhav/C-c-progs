#include<iostream>
using namespace std;

class num
{
    public : 
    class number
    {
        private :
        int n_207;
        public :
        void greatest(int a_207,int b_207)
        {
            n_207=a_207;
            if(n_207<b_207)
            {
                n_207=b_207;
            }
        }
        void display()
        {
            cout<<"\n Greatest number = "<<n_207;
        }
    };
};
int main()
{
    num::number p_207;
    p_207.greatest(1000 , 10);
    p_207.display();
}