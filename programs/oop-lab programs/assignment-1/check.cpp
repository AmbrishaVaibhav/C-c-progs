#include&lt;iostream&gt;
using namespace std;
int fun (int x, int y)
{
return x + y ;
}
double fun (int x, int y)
{
return x * y ;
}
int main()
{
cout&lt;&lt;fun(5 , 10);
return 0;
}