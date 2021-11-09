#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int n;
    int front;
    int back; 
    int *arr;
};
int isempty(struct queue *s)
{
    if(s->front==s->back)
    {
        return 1;
    }
    else 
    return 0;
}
int isfull(struct queue *s)
{
    if(s->back==s->n-1)
    {
        return 1;
    }
    else
    return 0;
}
void enqueue(struct queue *s,int val)
{
     if(isfull(s))
     {
         printf("Queue is full\n");
     }
     else
     {
         s->back++;
         s->arr[s->back]=val;
         printf("Enqueud element : %d\n",val);
     }
}
int dequeue(struct queue *s)
{
    int a=-1;
    if(isempty(s))
    {
        printf("The queue is empty\n");
        return -1;
    }
    else{
        s->front++;
        a=s->arr[s->front];
    }
  return a;
}
void display(struct queue *s)
{
    if(isempty(s))
    {
        printf("Queue is empty \n");
    }
    else{
        int i;
        printf("Elements of queue are : \n");
        for(i=s->front;i<=s->back;i++)
        {
            printf("%d",s->arr[i]);
        }
    }
}
int peek(struct queue *s)
{
    return s->arr[s->front];
}
int main()
{
    int size;
    printf("Enter the size of queue :\n");
    scanf("%d",&size);
    struct queue *p;
    p->n=size;
    p->front=p->back=0;
    p->arr=(int*)malloc(p->n*sizeof(int));

    int a;
    do
    {
    printf("Enter\n1 to check if the queue is empty\n2 to check if the queue is full\n3 to Insert an elemnt\n4 to delete an element\n5 to display the elemnts of the queue\n6 to find the peek value\n");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        {
            if(isempty(p))
            {
                printf("Queue is empty\n");
            }
            break;
        }

        case 2:
        {
            if(isfull(p))
            {
                printf("Queue is full\n");
            }
            break;
        }
        case 3:
        {
            int val;
            printf("Enter the element you want to insert :");
            scanf("%d",&val);
            enqueue(p,val);
            break;
        }
        case 4:
        {
            printf("The dequeued element is : %d\n",dequeue(p));
            break;
        }
        case 5:
        {
            display(p);
            break;
        }
        case 6:
        {
            printf("The peek value is : %d\n",peek(p));
            break;
        }


    }}while(a);
    return 0;

}