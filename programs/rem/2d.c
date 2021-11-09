#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mat[4][5];
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("the integer [%d][%d] :",i,j);
            scanf("%d", &mat[i][j]);
        }
    }
  printf("Two Dimensional array elements:\n");
  for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
               printf("%d ",mat[i][j]);
               if(j==4);
               {
               printf("\n");
        }}
    }
    return 0;
}
