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

void push(struct stack *ptr,char data )
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
char pop(struct stack *ptr)
{
     if(!isEmpty(*ptr))
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    else
    {
        printf("Stack underflow!\n");
        return '\0';
    }
}
int precedence(char c)
{
    if(c == '^')
        return 4;
    else if(c == '*' || c == '/')
        return 3;
    else if(c == '+' || c == '-')
        return 2;
    else 
        return 0;
}

int isParanthesis(char c)
{
    if(c == '(' || c == ')')
        return 1;
    else    
        return 0;
}

int isOperator(char c)
{
    if(c == '^' || c == '*' || c == '/' || c == '+' || c == '-')
        return 1;
    else 
        return 0;
}
char inpo(char *val)
{
    int a=0;
    char *cov= (char*)malloc(strlen(val) * sizeof(char));
    int counter=0;
    struct stack *s=(struct stack )
}