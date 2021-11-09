#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *total,i,n;
    
    printf("enter the number of elements :");
    scanf("%d", &n);
   
    total = (int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
 {
        printf("Enter the number %d :" ,i+1);
        scanf("%d", total+i);
 }
 printf("\narray in reverse order : \n\n");
 for(i=n-1;i>=0;i--)
 {
     printf("%d  ", *(total+i));
 }
     return 0;
     free(total);
 }