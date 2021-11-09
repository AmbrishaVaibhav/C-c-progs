#include <stdlib.h>
#include <stdio.h>
struct node
{
    struct node* next;
    int data;
};
void top(struct node** headref,int data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next= (*headref);
    *headref=newnode;
}
void insert(struct node* headref,int data)
{
    if(headref==NULL)
    {
        printf("not possible\n");
        return;
    }
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=headref->next;
    headref->next=newnode;
}
void end(struct node** headref,int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    struct node* last=*headref;
    newnode->data=data;
    newnode->next=NULL;
    while(last->next=NULL)
    {
      last=last->next;
      last->next=newnode;
      return;

    }
}
void print(struct node* node)
{
    while(node !=NULL)
    {
        printf("%d ",node);
        node=node->next;
    }
}
int main()
{
    struct node* head;
    top(&head,20);
    top(&head,10);
    end(&head,12);
    insert(head->next,5);
    print(head);
    return 0;
}