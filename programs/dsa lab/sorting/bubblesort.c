#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insert(struct node **temp,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=*temp;
    *temp=ptr;
}
void swap(struct node *temp,struct node *temp2)
{
    int x=temp->data;
    temp->data=temp2->data;
    temp2->data=x;
}
void sort(struct node *ptr)
{
    int s,i;
    struct node *ptr1;
    struct node *ptr2=NULL;
    if(ptr==NULL)
    {
        return;
    }
    do
    {
        s=0;
        ptr1=ptr;
        while(ptr1->next!=ptr2)
        {
            if(ptr1->data>ptr1->next->data)
            {
            swap(ptr1,ptr1->next);
            s=1;
            }
             ptr1=ptr1->next;
        }

       ptr2=ptr1;
    }
    while(s);
}

void display(struct node *ptr)
{
    struct node *temp=ptr;
    printf("\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
   struct node *ptr=NULL;
   int size;
   printf("Enter the no of nodes you want to insert : ");
   scanf("%d",&size);
   int arr[size];
   for(int i=0;i<size;i++)
   {
       printf("Enter element %d : ",i+1);
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<size;i++)
   {
   insert(&ptr,arr[i]);
   }
   printf("\nLinked list before sorting : ");
   display(ptr);
   sort(ptr);
   printf("\nAfter sorting : ");
   display(ptr);
   getchar();
   return 0;
   
}