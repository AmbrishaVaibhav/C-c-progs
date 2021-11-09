#include <stdio.h>
#include <stdlib.h>
int static npr(int n)
{
     if(n<=1)
     return 1;
     return n*npr(n-1);
}

int static fin(int n,int r)
{
    return (npr(n)/npr(n-r));
}

int main()
{
     int n,r;
    printf("enter the number and r :");
    scanf("%d%d",&n,&r);
    printf(" nPr is : %d ",fin(n,r));
}