#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *total, n, sum =0;
    float avg;
    
    printf("enter the number of elements:");
    scanf("%d", &n);
    total = (int*)malloc(n * sizeof(int));
 
 for(int i=0;i<n;i++)
 {
        printf("Enter the number %d :" ,i+1);
        scanf("%d", &total[i]);
        sum += total[i];
 }
    printf("The numbers are:" );
   for(int i=0;i<n;i++)
   {
       printf(" %d ",total[i]);
   }
      avg= (float)sum/n;
      printf("\naverage : %0.2f\n" , avg);
      free(total);
      return 0;
  }