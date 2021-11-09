#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int n;
    int front;
    int rear;
    int *arr;
};
int isempty(struct queue *s)
{
    if(s->front==s->rear)
    {
        return 1;
    }
    else 
    return 0;
}
int isfull(struct queue *s)
{
    if((s->rear)%s->n==s->front)
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
         s->rear=(s->rear+1)%s->n;
         s->arr[s->rear]=val;
         printf("Enqueud element : %d\n",val);
     }
}
int dequeue(struct queue *s)
{
    int a=-1;
    if(isempty(s))
    {
        printf("The queue is empty\n");
    }
    else{
        s->front=(s->front+1)%s->n;
        a=s->arr[s->front];
    }
  return a;
}

int main()
{
    int size;
    printf("Enter the size of queue :\n");
    scanf("%d",&size);
    struct queue *p;
    p->n=size;
    p->front=p->rear=0;
    p->arr=(int*)malloc(p->n*sizeof(int));

     int a;
    do
    {
    printf("Enter\n1 to check if the queue is empty\n2 to check if the queue is full\n3 to Insert an elemnt\n4 to delete an element\n");
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

    }}while(a);
    return 0;

}
