void insert(int *arr, int n)
{
  int el;
  int n2;
  printf("enter the element and position you want to enter it");
  scanf("%d %d", el, n2);
  n = n + 1;
  for (int i = n - 1; i > n2; i--)
  {
    arr[i] = arr[i - 1];
    arr[n2 - 1] = el;
  }
  
  for (int i = 0; i < n; i++)
  {
    printf("%d", *(arr + i));
  }
}

void delete (int *arr, int n)
{
  int el;
  int n2;
  printf("enter the element and position you want to delete");
  scanf("%d%d", el, n2);
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


 insert(arr,n);
    delete(arr,n);