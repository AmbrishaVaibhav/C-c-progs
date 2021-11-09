#include <stdio.h>
#include <stdlib.h>
void create(int *arr,int n)
{
 
  for (int i = 0; i < n; i++)
  {
    printf("\nenter the element %d : ", i + 1);
    scanf("%d",(arr+i));
  }
}
void print(int *arr, int n)
{

  for (int i = 0; i < n; i++)
  {
    printf("%d \n", *(arr + i));
  }
}
void insert(int *arr, int n)
{
  int el;
  int n2;
  printf("enter the element and position you want to enter it");
  scanf("%d %d",&el,&n2);
  n = n + 1;
  for (int i = n - 1; i > n2; i--)
  {
    arr[i] = arr[i - 1];
    arr[n2 - 1] = el;
  }
  
  for (int i = 0; i < n; i++)
  {
    printf("%d ", *(arr + i));
  }
}

void delete (int *arr, int n)
{
  int el;
  int n2;
  printf("enter the element and position you want to delete");
  scanf("%d %d",&el,&n2);
  n = n - 1;
  for (int i = n - 1; i >= n2; i++)
  {
    arr[i] = arr[i + 1];
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d", *(arr + i));
  }
}


void search(int *arr, int n)
{
  int el;
  printf("enter the element you want to search : ");
  scanf("%d",&el);
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == el)
      {
      printf("element found in the %d position\n", (i + 1));
    }
  }
}

void large(int *arr, int n)
{
  int max = arr[0];
  int min = arr[0];
  for (int i = 0; i < n; i++)
  {

    if (arr[i] > max)
    {
      max = arr[i];
    }
    
    if (arr[i] < min)
    {
      min = arr[i];
    }}
    printf("\nthe largest element is : %d\n",max);
    printf("the smallest element is : %d\n",min);
  }

   void sort(int *arr, int n)
   {
     int temp;
     for(int i=0;i<n;i++)
     {
       if(arr[i]>arr[i+1])
       {
         temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
       }
     printf("%d  ",arr[i]);
     }
   }

   int main()
   {
    int n;
    int *arr;
    printf("emter the array length :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
    arr = (int *)malloc(n*sizeof(int));
    }
    create(arr,n);
    print(arr,n);
   
 insert(arr,n);
    delete(arr,n);
    search(arr,n);
    large(arr,n);
    sort(arr,n);
    return 0;

   }