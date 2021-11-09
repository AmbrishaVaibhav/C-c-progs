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
void enqueueB(struct queue *s,int val)
{
    if(isfull(s))
    {
        printf("Queue overflow\n");
    }
    if(s->back==0)
    {
       s->back=s->front=1;
    }
    else if(s->back==s->n)
    {
          s->back==-1;
    }
    else{
        s->back=s->back+1;
    }
    s->arr[s->back]=val;
    printf("Enqueud element : %d\n",val);

}
int dequeueB(struct queue *s)
{
    int a=1;
    if(isempty(s))
    {
        printf("The queue is empty\n");
    }
    