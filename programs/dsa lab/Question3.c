#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n;
     printf("enter the last number - ");
     scanf("%d", &n);

     for (int i = 0; i < n; i = i + 2)
     {

          printf("%d ", i);
     }

     return 0;
}
