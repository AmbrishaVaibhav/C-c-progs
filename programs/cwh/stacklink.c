#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};

int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
        return 0;
}
int isfull(struct node *top)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    else
        return 0;
}
void push(struct node **top, int data)
{
    if (isfull(*top))
    {
        printf("Stack overflow");
    }
    else if (isempty(*top))
    {
        *top = (struct node *)malloc(sizeof(struct node));
        (*top)->data = data;
        (*top)->next = *top;
        printf("pushed \n");
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = *top;
        *top = temp;
        printf("pushed \n");
    }
}
int pop(struct node **top)
{
    int val = -1;
    struct node *temp;
    if (isempty(*top))
    {
        printf("stack underflow");
        return val;
    }
    else
    {
        val = (*top)->data;
        temp = *top;
        (*top) = (*top)->next;
        free(temp);
        return val;
    }
}
void traversal(struct node *top)
{
    while (top)
    {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}
int main()
{
    struct node *top = NULL;
    int a;
    do
    {
        printf("Enter 1 for checking if stack is empty\n enter 2 to print elements of stack\n enter 3 to push \n enter 4 pop\n ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
        {
            if (isempty(top))
            {
                printf("The stack is empty :");
            }
            else
            {
                printf("Stack is not empty ");
            }
            break;
        }
        case 2:
        {
            traversal(top);
            break;
        }
        case 3:
        {
            int val;
            printf("Enter the element you want to push :");
            scanf("%d", &val);
            push(&top, val);
            break;
        }
        case 4:
        {
            int number = pop(&top);
            printf("The element popped out is %d\n", &number);
        }
        }
    } while (a);
    return 0;
}
