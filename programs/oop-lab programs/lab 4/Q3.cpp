#include <iostream>
using namespace std;
class in
{
    int num_07;
    public :
    static int in_07;
    static int ou_07;
    void input(int n)
    {
       
       num_07 = n;
        in_07++;
    }
    void output()
    {
        cout<<"the number is "<<num_07<<endl;
        ou_07++;
    }
    
};

int in :: in_07;
int in :: ou_07;

int main()
{
    in one_07, two_07, three_07,four_07;
    one_07.input(50);
    two_07.input(60);
    three_07.input(70);
    four_07.input(80);
    one_07.output();
    two_07.output();
    three_07.output();
    cout << "The input function is called " << in::in_07 << " times" << endl;
    cout << "The output function is called " << in::ou_07 << " times" << endl;
    return 0;
}


