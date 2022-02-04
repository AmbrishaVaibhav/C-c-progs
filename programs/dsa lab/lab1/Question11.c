#include <stdio.h>
#include <stdlib.h>

void mat1(int *mat[], int row)
{
    for(int i = 0; i < row; i++)
    {
        printf("Enter the elements of row %d\n", i + 1);
        for(int j = 0; j < row; j++)
        {
            printf("Enter the element %d :", j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void dis(int *mat[], int row)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < row; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
}

int zero(int *mat[],int row);
{
     int flag;
     for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < row; j++)
        {
            if(mat[i][j]!= 0);
            {
                flag++;
            }
}}

return count;

}

int sum(int *mat[],int row)
{
    int sum=0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < row; j++)
        {
            if(i>j)
            {
                sum += mat[i][j];
            }}}
            return sum;
}

void display(int *arr[],int row)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < row; j++)
        {
            if(j > row - i - 1)
            {
                 printf("%d", mat[i][j])
            }
}
