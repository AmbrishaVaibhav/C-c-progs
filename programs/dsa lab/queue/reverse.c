#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int front;
    int back; 
    int *arr;
};
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *ptr,int data)
{
    if(isfull(ptr))
    {
        printf("Overflow\n");
    }
    else
    ptr->top++;
    ptr->arr[ptr->top]=data;
}
int pop(struct stack *ptr)
{
    if(isempty(ptr))
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        int val=ptr->arr[ptr->top];
    }
}
int isempty2(struct queue *s)
{
    if(s->front==s->back)
    {
        return 1;
    }
    else 
    return 0;
}
int isfull2(struct queue *s)
{
    if(s->back==s->size-1)
    {
        return 1;
    }
    else
    return 0;
}
void enqueue(struct queue *s,int data)
{
     if(isfull2(s))
     {
         printf("queue is full\n");
     }
     else if(isempty2(s))
     {
        s->front=s->back=0;
        s->arr[s->back]=data;
     }
     else
     {
         s->back++;
         s->arr[s->back]=data;
     }
}

int dequeue(struct queue *s)
{
    int val = -1;
    if(isempty2(s))
    {
        printf("queue is empty\n");
        return val;
    }
    else if(s->front == s->back)
    {
        val = s->arr[s->front];
        s->front = s->back = -1;
        return val;

    }
    else
    {
        val = s->arr[s->front++];
        return val;
    }
}
void print(struct queue *s)
{
    for(int i = s->front; i <= s->back; i++)
    {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}
void reverse(struct queue *p)
{
   struct stack s;
   s.top=-1;
   s.size=p->size;
   s.arr = (int*)malloc(s.size * sizeof(int));
   while(!isempty2(p))
   {
       push(&s, dequeue(p));
   }
   while(!isempty(&s))
   {
       enqueue(p,pop(&s));
   }
}
int main()
{
    struct queue *p=(struct queue*)malloc(sizeof(struct queue));
    p->size=5;
    p->front=p->back=-1;
    p->arr=(int*)malloc(p->size*sizeof(int));
    enqueue(p, 10);
    enqueue(p, 5);
    enqueue(p, 4);
    enqueue(p, 15);
    enqueue(p, 2);
    print(p);
    reverse(p);
    print(p);
}