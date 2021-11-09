#include <stdio.h>
#include <stdlib.h>
struct node *rear;
struct node *front;
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
    printf("Elements in this list :\n");
    while(ptr)
    {
       printf("%d\n",ptr->data);
       ptr=ptr->next;
    }
}
int isempty()
{
    
    if(front==NULL)
    {
        return 1;
    }
    else 
    return 0;
}
void enqueue(int val)
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL)
    {
       printf("Queue is full\n");
    }
    else{
        n->data=val;
        n->next=NULL;
        if(front==NULL)
        {
            front=rear=n;
        }
        else
        {
            rear->next=n;
            rear=n;
        }

    }
}
int dequeue()
{
    struct node *n=front;
    int val=-1;
    if(isempty(front))
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        front=front->next;
        val=n->data;
        free(n);
    }
    return val;
}
int peek()
{
    if (front != NULL) {
        return front->data;
    }
    else {
       printf("Queue is empty");
    }
}
int main()
{
    int a;
    do
    {
    printf("Enter\n1 to check if the queue is empty\n2 to Insert an elemnt\n3 to delete an element\n4 to print the elements of queue\n5 to find the peek value of the queue\n");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        {
            if(isempty())
            {
                printf("Queue is empty\n");
            }
            break;
        }
        case 2:
        {
            int val;
            printf("Enter the element you want to insert :");
            scanf("%d",&val);
            enqueue(val);
            break;
        }
        case 3:
        {
            printf("The dequeued element is : %d\n",dequeue());
            break;
        }
        case 4:
        {
            traversal(front);
            break;
        }
        case 5:
        {
            printf("The peek value is :%d \n",peek());
            break;
        }

    }}while(a);
    return 0;

}