#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;

};
struct node *head=NULL;
struct node *create(int data)
{
    struct node *temp= (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}
struct node *travel(struct node *p)
{
    printf("NULL ");
    while(p)
    {
       printf("%d<--> ",p->data);
       p=p->next;

    }
    printf("NULL\n");
}

void print(struct node *p)
{
     if(p!=NULL)
     {
        printf("%d<--> ",p->data);
        print(p->next);
}
}
int main()
{
    struct node *a;
    int no, data, index;
    printf("Enter the number of nodes : ");
    scanf("%d",&no);
    printf("The first element - ");
    scanf("%d",&data);
    a=create(data);
    head=a;
    while(no-1)
    {
    printf("The next element - ");
    scanf("%d",&data);
    a=create(data);
    struct node *head2=head;
    while(head2->next)
    {
        head2=head2->next;
    }
    head2->next=a;
    a->prev=head2;
    no--;
    }
    travel(head);
    printf("NULL ");
    print(head);
    printf("NULL\n");
    return 0;
}