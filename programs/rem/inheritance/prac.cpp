#include <iostream>
using namespace std;
class abc
{
    private :
    int a=40;
    public :
    int p=50;
    void abcd()
    {
        printf("%d %d ",a,p);
    }
};

class abc2 : public abc
{
    int add=20;
    public :
    //void abcd();
    void ad()
    {
        printf("%d %d",p+add);
    }
};
int main()
{
    abc az;
    az.abcd();
    abc2 pc;
    pc.abcd();
    pc.ad();
}
