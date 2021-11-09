#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node* next;
};

void move(struct node* head)
{
    while(head != NULL)
    {
    printf("%d ",head->data);
    head=head->next;
}}
int main()
{
    struct node* head,*b,*c;
    head=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=b;
    b->data=4;
    b->next=c;
    c->data=8;
    c->next=NULL;
    move(head);
    return 0;



}


