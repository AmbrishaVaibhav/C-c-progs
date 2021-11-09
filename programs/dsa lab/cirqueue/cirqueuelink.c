#include <stdio.h>
#include <stdlib.h>
struct node *rear;
struct node *front;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void traversal(struct node *ptr)
{
    printf("Elements in the list are : \n");
    while(ptr->next!=front)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int isempty()
{
    if(front ==-1 && rear==-1)
    {
      return 1;
    }
    else
    return 0;
}
void enqueuefront(int val,struct node *ptr)
{
    if(front->next=rear)
    {
        printf("Overflow\n");
    }
    else if(front=0)
    {
        front=rear=1;
    }
    else if
    {

    }