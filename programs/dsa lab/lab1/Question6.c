
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*numbers,i;
    printf("enter the number of elements you want to store : ");
    scanf("%d", &n);
    numbers =(int*)malloc(n*sizeof(int));


printf("\n");

         for(i=0;i<n;++i)
        {
         printf("Enter the number %d :",i+1);
         scanf("%d", numbers+i);
        }

         for(i=1;i<n;++i)
         {
             if(*numbers < *(numbers +i))
            
                   *numbers = *(numbers + i);
         }

             printf("\nLargest element = %d", *numbers);
             return 0;
             free(numbers);
         }

