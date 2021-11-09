#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int *p;
    int size;
};
int isempty(struct stack *temp)
{
    if (temp->top == -1)
        return 1;
    else
        return 0;
}
int isfull(struct stack *temp)
{
    if (temp->top == temp->size - 1)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->p = (int *)malloc(s->size * sizeof(int));
    for(int i=0;i<=5;i++)
    {
        printf("Enter the value : ");
        scanf("%d",s->p[0]);
        s->top++;
    }
    if(isempty(s))
    {
        printf("Stack is empty/n");
    }
    else
    {
        printf("stack is not empty/n");
    }
    if(isfull(s))
    {
        printf("Stack is full/n");
    }
    else
    {
        printf("stack is not full/n");
    }
}