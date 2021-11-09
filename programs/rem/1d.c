#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int n;
    int sum=0;

    printf("enter the number of terms you want to store :");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(!arr)
    {
        printf("insufficiant");
    }
    printf("please enter the intergers :\n");
    for(int i=0;i<n;i++)
{
    printf("integer %d = ",i+1);
    scanf("%d",(arr+i));
    sum = sum+ *(arr+i);

}
printf("the integers are :\n");
for(int i=0;i<n;i++)
{
    printf("the integer %d is : %d\n",i+1,*(arr+i));

}
printf("the sum is %d :",sum);
return 0;
free(arr);
}