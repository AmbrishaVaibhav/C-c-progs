#include <stdio.h>
#include <stdlib.h>
int hcf(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else 
    return hcf(b,a%b);
}
int main()
{
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("the hcf of %d and %d is : %d ",a,b,hcf(a,b));
    return 0;
}