#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
int static lcm(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else 
    return lcm(b,a%b);
}

int static fin(int a,int b)
{
    return(a*b/lcm(a,b));
}

int main()
{
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("the lcm of %d and %d is : %d ",a,b,fin(a,b));
    return 0;
}