#include <stdio.h>
#include <stdlib.h>
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
void print(struct stack *ptr)
{
    for(int i=ptr->top;i>=0;i--)
    {
        printf("%d ",ptr->arr[i]);
        printf("\n");
    }
}
void push(struct stack *ptr,int data )
{
   if(isfull(ptr))
    {
        printf("overflow");
    }
    else
    {
           ptr->top++;
           ptr->arr[ptr->top]=data;
        
    }
}
int pop(struct stack *ptr)
{
   if(isempty(ptr))
   {
       printf("Stack under flow\n");
       return -1;
   }
   else 
   {
       int val=ptr->arr[ptr->top];
       ptr->top--;
       return val;
   }
}
int main()
{
    int z;
    printf("enter the desired size :");
    scanf("%d",&z); 
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size=z;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    int a;
    do
    {
        printf("Enter 1 for checking if stack is empty\n enter 2 to print elements of stack\n enter 3 to push \n enter 4 pop\n ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
        {
       if(isempty(s))
    {
        printf("Stack is empty\n");
    }
    else{
        printf("Stack is not empty\n");
    }
      break;
        }
        case 2 :
        {
        print(s);
        break;
        }
        case 3:
{
   int p;
   printf("enter the data you want to enter : ");
   scanf("%d",&p);
   push(s,p);
   printf("pushed \n");
   break;
   }
   case 4 :
   {
       int val=pop(s);
       printf("popped %d\n",val);
   }}}
   while(a);
   
    return 0;
}